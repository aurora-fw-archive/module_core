message(STATUS "Loading core module...")

if (NOT CONFIGURED_ONCE)
	set(MODULE_CORE_SOURCE_DIR ${MODULE_CORE_DIR}/src)
endif()

include_directories(${MODULE_CORE_DIR}/include)

add_library (aurorafw-core SHARED ${MODULE_CORE_SOURCE_DIR}/Debug.cpp
                              	  ${MODULE_CORE_SOURCE_DIR}/Application.cpp)

target_link_libraries(aurorafw-core aurorafw-cli)

set_target_properties(aurorafw-core PROPERTIES OUTPUT_NAME aurorafw-core)
