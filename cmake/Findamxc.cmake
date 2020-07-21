# SPDX-License-Identifier: BSD-2-Clause-Patent
#
# SPDX-FileCopyrightText: 2019-2020 the prplMesh contributors (see AUTHORS.md)
#
# This code is subject to the terms of the BSD+Patent license.
# See LICENSE file for more details.

find_library(AMXC_LIBRARY "libamxc.so" PATHS ${CMAKE_PREFIX_PATH}/usr/lib/)
find_path(AMXC_INCLUDE_DIRS
    NAMES amxc_llist.h amxc_string_join.h amxc_common.h amxc_rbuffer.h amxc_variant_type.h amxc_variant.h amxc_aqueue.h amxc_timestamp.h amxc_astack.h amxc_hash.h amxc_array.h amxc.h amxc_lstack.h amxc_string.h amxc_htable.h amxc_lqueue.h amxc_string_split.h
    PATH_SUFFIXES amxc
)

include(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(amxc DEFAULT_MSG
    AMXC_LIBRARY
    AMXC_INCLUDE_DIRS
)

if (amxc_FOUND)
    add_library(amxc UNKNOWN IMPORTED)

    # Includes
    set_target_properties(amxc PROPERTIES
        INTERFACE_INCLUDE_DIRECTORIES "${AMXC_INCLUDE_DIRS}/"
    )

    # Library
    set_target_properties(amxc PROPERTIES
        IMPORTED_LINK_INTERFACE_LANGUAGES "C"
        IMPORTED_LOCATION "${AMXC_LIBRARY}"
    )

endif()
