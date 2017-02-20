//
// Created by alex on 19/02/17.
//

#include "dateLib.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_PLUGIN(dateLib) {
        py::module m("dateLib", R"pbdoc(
        Pybind11 example plugin
        -----------------------

        .. currentmodule:: dateLib

        .. autosummary::
           :toctree: _generate

           getDateStr()
    )pbdoc");

        m.def("dateLib", &date::getDateStr, R"pbdoc(
        Return the current date.

        :return: A unicode date string.
        :rtype: unicode
    )pbdoc");

#ifdef DATELIB_VERSION_INFO
        m.attr("__version__") = py::str(DATELIB_VERSION_INFO);
#else
        m.attr("__version__") = py::str("dev");
#endif

        return m.ptr();
}
