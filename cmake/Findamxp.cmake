# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# SPDX-FileCopyrightText: 2019-2020 the prplMesh contributors (see AUTHORS.md)
#
# This code is subject to the terms of the BSD+Patent license.
# See LICENSE file for more details.

find_library(AMXP_LIBRARY "libamxp.so" PATHS ${CMAKE_PREFIX_PATH}/usr/lib/)
find_path(AMXP_INCLUDE_DIRS
    NAMES amxp_types.h amxp_register.h amxp_invoke.h amxp.h amxp_connect.h amxp_common.h amxp_error.h amxp_operators.h amxp_be_intf.h amxp_be.h amxp_subscribe.h amxp_be_mngr.h
    PATH_SUFFIXES amxp
)

include(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(amxp DEFAULT_MSG
    AMXP_LIBRARY
    AMXP_INCLUDE_DIRS
)

if (amxp_FOUND)
    add_library(amxp UNKNOWN IMPORTED)

    # Includes
    set_target_properties(amxp PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${AMXP_INCLUDE_DIRS}/"
    )

    # Library
    set_target_properties(amxp PROPERTIES
        IMPORTED_LINK_INTERFACE_LANGUAGES "C"
        IMPORTED_LOCATION "${AMXP_LIBRARY}"
    )

endif()
