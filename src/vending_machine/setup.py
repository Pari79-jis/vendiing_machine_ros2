from setuptools import find_packages, setup

package_name = "vending_machine"

setup(
    name=package_name,
    version="1.0.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        ("share/ament_index/resource_index/packages", [f"resource/{package_name}"]),
        (f"share/{package_name}", ["package.xml"]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="parimala",
    maintainer_email="parimalasowmya00@gmail.com",
    description="Vending Machine ROS2 Service",
    license="Apache-2.0",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "vending_server = vending_machine.vending_server:main",
            "vending_client = vending_machine.vending_client:main",
        ],
    },
)
