from setuptools import find_packages, setup

package_name = 'openbase2_bringup'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/bringup.launch.py']),
        ('share/' + package_name + '/launch', ['launch/old_bringup.launch.py']),
        ('share/' + package_name + '/launch', ['launch/radio.launch.py']),
        ('share/' + package_name + '/launch', ['launch/rtab.launch.py']),
        ('share/' + package_name + '/launch', ['launch/scan_d415.launch.py']),
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
        ],
    },
)
