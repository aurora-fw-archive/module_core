# ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
# ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
# ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
# A Powerful General Purpose Framework
# More information in: https://aurora-fw.github.io/
#
# Copyright (C) 2017 Aurora Framework, All rights reserved.
#
# This file is part of the Aurora Framework. This framework is free
# software; you can redistribute it and/or modify it under the terms of
# the GNU Lesser General Public License version 3 as published by the
# Free Software Foundation and appearing in the file LICENSE included in
# the packaging of this file. Please review the following information to
# ensure the GNU Lesser General Public License version 3 requirements
# will be met: https://www.gnu.org/licenses/lgpl-3.0.html.

message(STATUS "Loading core module...")

if (NOT CONFIGURED_ONCE)
	set(AURORAFW_MODULE_CORE_SOURCE_DIR ${AURORAFW_MODULE_CORE_DIR}/src)
endif()

include_directories(${AURORAFW_MODULE_CORE_DIR}/include)
file(GLOB AURORAFW_MODULE_CORE_HEADERS_CORE ${AURORAFW_MODULE_CORE_DIR}/include/Aurora/Core/*.h)

add_library (aurorafw-core SHARED ${AURORAFW_MODULE_CORE_SOURCE_DIR}/Debug.cpp
                              	  ${AURORAFW_MODULE_CORE_SOURCE_DIR}/Application.cpp)

target_link_libraries(aurorafw-core aurorafw-cli)

set_target_properties(aurorafw-core PROPERTIES OUTPUT_NAME aurorafw-core)

install(TARGETS aurorafw-core DESTINATION lib)
install(FILES ${AURORAFW_MODULE_CORE_HEADERS_CORE} DESTINATION include/Aurora/Core)
