/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(cpm.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(26142cac2adffa3cc16c2b8e9c0ae6ff)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/analog/cpm.h>
// pydoc.h is automatically generated in the build directory
#include <cpm_pydoc.h>

void bind_cpm(py::module& m)
{

    using cpm = ::gr::analog::cpm;

    py::class_<cpm, std::shared_ptr<cpm>> cpm_class(m, "cpm");


    py::enum_<gr::analog::cpm::cpm_type>(cpm_class, "cpm_type")
        .value("LRC", gr::analog::cpm::LRC)           // 0
        .value("LSRC", gr::analog::cpm::LSRC)         // 1
        .value("LREC", gr::analog::cpm::LREC)         // 2
        .value("TFM", gr::analog::cpm::TFM)           // 3
        .value("GAUSSIAN", gr::analog::cpm::GAUSSIAN) // 4
        .value("GENERIC", gr::analog::cpm::GENERIC)   // 999
        .export_values();

    cpm_class.def_static("phase_response",
                         &cpm::phase_response,
                         py::arg("type"),
                         py::arg("samples_per_sym"),
                         py::arg("L"),
                         py::arg("beta") = 0.3,
                         D(cpm, phase_response));
}
