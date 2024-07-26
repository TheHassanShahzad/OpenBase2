from setuptools import find_packages, setup

package_name = 'openbase2_scripts'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='the-hassan-shahzad',
    maintainer_email='hshahzad2005108277@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'diff_drive_node = openbase2_scripts.diff_drive:main',
            'hardware_driver = openbase2_scripts.hardware_driver:main',
            'odom_node = openbase2_scripts.odom_node:main'
        ],
    },
)
