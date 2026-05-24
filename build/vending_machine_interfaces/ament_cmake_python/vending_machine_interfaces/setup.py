from setuptools import find_packages
from setuptools import setup

setup(
    name='vending_machine_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('vending_machine_interfaces', 'vending_machine_interfaces.*')),
)
