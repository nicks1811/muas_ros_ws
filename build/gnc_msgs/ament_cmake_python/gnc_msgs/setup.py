from setuptools import find_packages
from setuptools import setup

setup(
    name='gnc_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('gnc_msgs', 'gnc_msgs.*')),
)
