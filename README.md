# pybind_argparse
Simple, basic test library playing with PyBind and args.

Uses args from [Taywee](https://github.com/taywee/args) and pybind11 from [pybind](https://github.com/pybind/pybind11)

If you want to build with a non default version of python, make sure to pass "-DPYBIND11_PYTHON_VERSION=<VERSION>" where version is the python version that you want to build against. For example "-DPYBIND11_PYTHON_VERSION=3.5"

Not much else to say... It's not supposed to be *good*, it's just a test to play around with the two libraries.
Two python libs and a commandline tool should get built.
