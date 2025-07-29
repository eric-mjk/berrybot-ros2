from setuptools import find_packages, setup
from glob import glob
import os

package_name = 'simple_yolo'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(include=[package_name, f'{package_name}.*']),
    data_files=[
        ('share/ament_index/resource_index/packages',
         [f'resource/{package_name}']),
        ('share/' + package_name, ['package.xml']),
        (f'share/{package_name}/models', glob(f'{package_name}/models/*')),
        (f'share/{package_name}/ultralytics/ultralytics/cfg', glob(f'{package_name}/ultralytics/ultralytics/cfg/*.yaml')),

    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mj',
    maintainer_email='eric.mjkim35@gmail.com',
    description='YOLO integrated package',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'perception_node = simple_yolo.perception_node:main',
        ],
    },
)
