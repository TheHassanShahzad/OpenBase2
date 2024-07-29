from setuptools import find_packages
from setuptools import setup

setup(
    name='openbase2_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('openbase2_msgs', 'openbase2_msgs.*')),
)
