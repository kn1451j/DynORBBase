from setuptools import find_packages
from setuptools import setup

setup(
    name='dynorb_interface',
    version='0.0.0',
    packages=find_packages(
        include=('dynorb_interface', 'dynorb_interface.*')),
)
