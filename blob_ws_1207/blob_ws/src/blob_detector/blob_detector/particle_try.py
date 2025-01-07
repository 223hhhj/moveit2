import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
from scipy.ndimage import gaussian_filter1d
import pandas as pd
from typing import Dict, List
import time

class ParticleFilter:
    def __init__(self, n_particles=100):
        self.n_particles = n_particles
        self.particles = None
        self.weights = None
        
        # 優化系統參數
        self.state_std = 0.08
        self.measurement_std = 0.15
        self.velocity_std = 0.03
        
        # 添加額外的平滑參數
        self.smoothing_window = 5
        self.position_history = []
        self.smoothed_positions = []
        
    def initialize(self, x_range, y_range):
        """初始化粒子，包含位置和速度"""
        positions = np.random.uniform(
            low=[x_range[0], y_range[0]], 
            high=[x_range[1], y_range[1]], 
            size=(self.n_particles, 2)
        )
        velocities = np.random.normal(0, 0.1, size=(self.n_particles, 2))
        self.particles = np.hstack([positions, velocities])
        self.weights = np.ones(self.n_particles) / self.n_particles
        
        self.position_history = []
        self.smoothed_positions = []
        
    def predict(self, dt=1.0):
        """改進的預測步驟"""
        self.particles[:, 0:2] += self.particles[:, 2:4] * dt
        
        velocities = np.linalg.norm(self.particles[:, 2:4], axis=1)
        adaptive_noise = self.state_std * (1 + 0.5 * np.exp(-velocities))
        
        position_noise = np.random.normal(0, adaptive_noise[:, None], size=(self.n_particles, 2))
        velocity_noise = np.random.normal(0, self.velocity_std, size=(self.n_particles, 2))
        
        self.particles[:, 0:2] += position_noise
        self.particles[:, 2:4] += velocity_noise
        
    def update(self, measurement):
        """改進的更新步驟"""
        dist = np.linalg.norm(self.particles[:, 0:2] - measurement, axis=1)
        self.weights = np.exp(-0.5 * (dist ** 2) / (self.measurement_std ** 2))
        
        if len(self.position_history) > 0:
            prev_pos = self.position_history[-1]
            prev_dist = np.linalg.norm(self.particles[:, 0:2] - prev_pos, axis=1)
            smoothing_weights = np.exp(-0.5 * (prev_dist ** 2) / (self.state_std ** 2))
            self.weights *= (0.9 * smoothing_weights + 0.1)
        
        self.weights += 1e-300
        self.weights /= np.sum(self.weights)
    
    def estimate(self):
        """改進的狀態估計"""
        mean = np.average(self.particles, weights=self.weights, axis=0)
        self.position_history.append(mean[0:2])
        
        if len(self.position_history) >= self.smoothing_window:
            positions = np.array(self.position_history)
            weights = np.exp(np.linspace(-1, 0, self.smoothing_window))
            weights /= np.sum(weights)
            
            smoothed_x = np.convolve(positions[-self.smoothing_window:, 0], weights, mode='valid')
            smoothed_y = np.convolve(positions[-self.smoothing_window:, 1], weights, mode='valid')
            
            if len(self.smoothed_positions) > 0:
                alpha = 0.7
                prev_smooth = self.smoothed_positions[-1]
                current_smooth = np.array([smoothed_x[-1], smoothed_y[-1]])
                smoothed_pos = alpha * current_smooth + (1-alpha) * prev_smooth
                self.smoothed_positions.append(smoothed_pos)
            else:
                self.smoothed_positions.append(np.array([smoothed_x[-1], smoothed_y[-1]]))
            
            return self.smoothed_positions[-1]
        
        return mean[0:2]
    
    def neff(self):
        """計算有效樣本數"""
        return 1.0 / np.sum(np.square(self.weights))
    
    def resample(self):
        """改進的重採樣步驟"""
        cumsum = np.cumsum(self.weights)
        step = 1.0 / self.n_particles
        u = np.arange(0, 1, step)
        u += np.random.uniform(0, step)
        
        indices = np.searchsorted(cumsum, u)
        self.particles = self.particles[indices]
        
        noise_scale = np.mean(np.linalg.norm(self.particles[:, 2:4], axis=1))
        noise_scale = max(0.01, min(0.1, noise_scale * 0.1))
        
        self.particles += np.random.normal(0, noise_scale, size=self.particles.shape)
        self.weights = np.ones(self.n_particles) / self.n_particles

class ParticleFilterAnalyzer:
    def __init__(self, particle_counts: List[int]):
        self.particle_counts = particle_counts
        self.filters = {n: ParticleFilter(n_particles=n) for n in particle_counts}
        self.results = {n: {'x_pred': [], 'y_pred': []} for n in particle_counts}
        self.errors = {n: {'rmse': [], 'mae': [], 'time': 0} for n in particle_counts}
        
    def initialize_filters(self, x_range, y_range):
        """初始化所有粒子濾波器"""
        for pf in self.filters.values():
            pf.initialize(x_range, y_range)
    
    def update_all(self, measurement, ground_truth):
        """更新所有濾波器並計算誤差"""
        results = {}
        for n_particles, pf in self.filters.items():
            start_time = time.time()
            
            if len(pf.position_history) > 0:
                pf.predict()
            
            pf.update(measurement)
            
            if pf.neff() < pf.n_particles / 2:
                pf.resample()
            
            estimate = pf.estimate()
            self.results[n_particles]['x_pred'].append(estimate[0])
            self.results[n_particles]['y_pred'].append(estimate[1])
            
            # 計算誤差
            error = np.linalg.norm(estimate - ground_truth)
            self.errors[n_particles]['rmse'].append(error)
            self.errors[n_particles]['time'] += time.time() - start_time
            
            results[n_particles] = estimate
            
        return results
    
def save_results_to_excel(self, true_trajectory: np.ndarray, filename: str = 'particle_filter_comparison.xlsx'):
    """將結果保存到Excel檔案，按照指定格式輸出"""
    writer = pd.ExcelWriter(filename, engine='openpyxl')
    
    # 為每個粒子數量創建一個工作表
    for n_particles in self.particle_counts:
        # 獲取該粒子數量的預測結果
        results = self.results[n_particles]
        x_pred = np.array(results['x_pred'])
        y_pred = np.array(results['y_pred'])
        
        # 準備數據
        data = {
            'X Ground Truth': true_trajectory[:len(x_pred), 0],
            'X Predicted': x_pred,
            'Y Ground Truth': true_trajectory[:len(x_pred), 1],
            'Y Predicted': y_pred
        }
        
        # 創建DataFrame
        df = pd.DataFrame(data)
        
        # 計算RMSE
        x_rmse = np.sqrt(np.mean((true_trajectory[:len(x_pred), 0] - x_pred) ** 2))
        y_rmse = np.sqrt(np.mean((true_trajectory[:len(x_pred), 1] - y_pred) ** 2))
        total_rmse = np.sqrt((x_rmse**2 + y_rmse**2)/2)
        
        # 添加誤差統計
        stats_df = pd.DataFrame({
            'Metric': ['RMSE'],
            'X Error': [x_rmse],
            'Y Error': [y_rmse],
            'Total Error': [total_rmse]
        })
        
        # 將數據寫入Excel
        sheet_name = f'{n_particles}_particles'
        df.to_excel(writer, sheet_name=sheet_name, index=False)
        
        # 在數據下方寫入誤差統計
        stats_df.to_excel(writer, sheet_name=sheet_name, 
                         startrow=len(df) + 2, index=False)
        
    writer.save()
    writer.close()
    print(f"Results saved to {filename}")

def generate_trajectory(n_steps):
    """生成更平滑的測試軌跡"""
    t = np.linspace(0, 4*np.pi, n_steps)
    x = 10 + 5 * np.cos(t/2)
    y = 10 + 3 * np.sin(t)
    
    for _ in range(3):
        x = gaussian_filter1d(x, sigma=1.5)
        y = gaussian_filter1d(y, sigma=1.5)
    
    return np.column_stack((x, y))

def create_animation(analyzer, true_trajectory, measurements, n_steps):
    """創建動畫視覺化"""
    fig = plt.figure(figsize=(15, 10))
    gs = plt.GridSpec(3, 2, figure=fig)
    
    # 為每個粒子數量創建位置追蹤圖
    ax_positions = []
    for i, n in enumerate(analyzer.particle_counts):
        ax = fig.add_subplot(gs[i, 0])
        ax.set_xlim(0, 20)
        ax.set_ylim(0, 20)
        ax.grid(True)
        ax.set_title(f'Position Tracking ({n} particles)')
        ax_positions.append(ax)
    
    # 創建X和Y位置估測圖
    ax_x = fig.add_subplot(gs[0, 1])
    ax_y = fig.add_subplot(gs[1, 1])
    
    # 設置正確的軸範圍
    x_min, x_max = np.min(true_trajectory[:, 0]), np.max(true_trajectory[:, 0])
    y_min, y_max = np.min(true_trajectory[:, 1]), np.max(true_trajectory[:, 1])
    margin = 1.0  # 添加邊界空間
    
    ax_x.set_xlim(0, n_steps)
    ax_x.set_ylim(x_min - margin, x_max + margin)
    ax_x.grid(True)
    ax_x.set_title('X Position Estimate')
    ax_x.set_xlabel('Time Step')
    ax_x.set_ylabel('X Position')
    
    ax_y.set_xlim(0, n_steps)
    ax_y.set_ylim(y_min - margin, y_max + margin)
    ax_y.grid(True)
    ax_y.set_title('Y Position Estimate')
    ax_y.set_xlabel('Time Step')
    ax_y.set_ylabel('Y Position')
    
    # 初始化圖形元素
    position_lines = []
    particle_scatters = []
    estimate_lines = []
    for ax in ax_positions:
        line, = ax.plot([], [], 'b-', label='True Trajectory', alpha=0.7)
        scatter = ax.scatter([], [], c='r', alpha=0.3, label='Particles')
        est_line, = ax.plot([], [], 'r-', label='PF Estimate', linewidth=2)
        position_lines.append(line)
        particle_scatters.append(scatter)
        estimate_lines.append(est_line)
        ax.legend()
    
    # X和Y估測圖的線條
    time_points = np.arange(n_steps)
    x_lines = {}
    y_lines = {}
    colors = ['blue', 'orange', 'green']  # 為不同粒子數量設置不同顏色
    for i, n in enumerate(analyzer.particle_counts):
        x_lines[n] = ax_x.plot([], [], '-', label=f'{n} particles', 
                              color=colors[i], alpha=0.7)[0]
        y_lines[n] = ax_y.plot([], [], '-', label=f'{n} particles',
                              color=colors[i], alpha=0.7)[0]
    
    # 添加Ground Truth線
    x_true, = ax_x.plot([], [], 'k--', label='Ground Truth', linewidth=2)
    y_true, = ax_y.plot([], [], 'k--', label='Ground Truth', linewidth=2)
    
    ax_x.legend()
    ax_y.legend()
    
    def init():
        for line in position_lines:
            line.set_data([], [])
        for scatter in particle_scatters:
            scatter.set_offsets(np.zeros((0, 2)))
        for est_line in estimate_lines:
            est_line.set_data([], [])
        for line in x_lines.values():
            line.set_data([], [])
        for line in y_lines.values():
            line.set_data([], [])
        x_true.set_data([], [])
        y_true.set_data([], [])
        return tuple(position_lines + estimate_lines + list(x_lines.values()) + 
                    list(y_lines.values()) + [x_true, y_true])
    
    def animate(frame):
        results = analyzer.update_all(measurements[frame], true_trajectory[frame])
        
        # 更新位置追蹤圖
        for i, n in enumerate(analyzer.particle_counts):
            pf = analyzer.filters[n]
            position_lines[i].set_data(true_trajectory[:frame+1, 0], 
                                     true_trajectory[:frame+1, 1])
            particle_scatters[i].set_offsets(pf.particles[:, 0:2])
            
            if len(pf.position_history) > 0:
                positions = np.array(pf.position_history)
                estimate_lines[i].set_data(positions[:, 0], positions[:, 1])
        
        # 更新X和Y位置估測圖
        x_true.set_data(time_points[:frame+1], true_trajectory[:frame+1, 0])
        y_true.set_data(time_points[:frame+1], true_trajectory[:frame+1, 1])
        
        for n in analyzer.particle_counts:
            if len(analyzer.results[n]['x_pred']) > 0:
                x_lines[n].set_data(time_points[:frame+1], 
                                  analyzer.results[n]['x_pred'][:frame+1])
                y_lines[n].set_data(time_points[:frame+1], 
                                  analyzer.results[n]['y_pred'][:frame+1])
        
        return tuple(position_lines + estimate_lines + list(x_lines.values()) + 
                    list(y_lines.values()) + [x_true, y_true])
    
    plt.tight_layout()
    
    anim = FuncAnimation(
        fig, animate, init_func=init, frames=n_steps,
        interval=50, blit=True
    )
    
    return anim

def main():
    # 設置參數
    n_steps = 300
    particle_counts = [10, 100, 1000]
    
    # 生成真實軌跡和測量值
    true_trajectory = generate_trajectory(n_steps)
    measurements = true_trajectory + np.random.normal(0, 0.2, size=true_trajectory.shape)
    
    # 初始化分析器
    analyzer = ParticleFilterAnalyzer(particle_counts)
    analyzer.initialize_filters([0, 20], [0, 20])
    
    # 創建並顯示動畫
    anim = create_animation(analyzer, true_trajectory, measurements, n_steps)
    plt.show()
    
    # 保存結果到Excel
    analyzer.save_results_to_excel(true_trajectory, measurements)

if __name__ == "__main__":
    main()