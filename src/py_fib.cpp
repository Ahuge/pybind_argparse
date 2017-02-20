#include "fib.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_PLUGIN(fibonacci) {
    py::module m("fibonacci", R"pbdoc(
        Pybind11 example plugin
        -----------------------

        .. currentmodule:: fibonacci

        .. autosummary::
           :toctree: _generate

           fibonacci(number)
    )pbdoc");

    m.def("fibonacci", &fibonacci::fibonacci, R"pbdoc(
        Calculate a fibonacci sequence

        :param int number: The number you want to run against the fibonacci sequence.
        :return: The last number calculated.
        :rtype: long
    )pbdoc");

#ifdef FIB_VERSION_INFO
    m.attr("__version__") = py::str(FIB_VERSION_INFO);
#else
    m.attr("__version__") = py::str("dev");
#endif

    return m.ptr();
}
