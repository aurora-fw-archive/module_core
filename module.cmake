message(STATUS "Loading core module...")

if (NOT CONFIGURED_ONCE)
	set(MODULE_CORE_SOURCE_DIR ${MODULE_CORE_DIR}/src)
endif()

include_directories(${MODULE_CORE_DIR}/include)
file(GLOB MODULE_CORE_HEADERS_CORE ${MODULE_CORE_DIR}/include/Aurora/Core/*.h)

add_library (aurorafw-core SHARED ${MODULE_CORE_SOURCE_DIR}/Debug.cpp
                              	  ${MODULE_CORE_SOURCE_DIR}/Application.cpp)

target_link_libraries(aurorafw-core aurorafw-cli)

set_target_properties(aurorafw-core PROPERTIES OUTPUT_NAME aurorafw-core)

install(TARGETS aurorafw-core DESTINATION lib)
install(FILES ${MODULE_CORE_HEADERS_CORE} DESTINATION include/Aurora/Core)
