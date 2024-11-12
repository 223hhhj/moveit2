from setuptools import setup
from glob import glob
import os

package_name = 'yolov8_realsense'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # 如果您有launch文件，請取消下面這行的註釋
        # (os.path.join('share', package_name), glob('launch/*launch.[pxy][yma]*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='robot',
    maintainer_email='steven@todo.todo',
    description='YOLO Realsense Integration',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'realsense_yolo = yolov8_realsense.realsense_yolo:main',
        ],
    },
)