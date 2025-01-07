from setuptools import setup

package_name = 'blob_detector'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your@email.com',
    description='Blob detector package for ROS2',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'blob_detector_node = blob_detector.blob_detector_node:main',
            'visual_particle = blob_detector.visual_particle:main',
            'ur5_z_blob = blob_detector.ur5_z_blob:main'
        ],
    },
)
