cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project (aurorafw-module-core)

message(STATUS "Starting framework build system...")

include(${CMAKE_SOURCE_DIR}/build/aurora-config.cmake)
set(AURORAFW_MODULE_CORE_DIR ${CMAKE_SOURCE_DIR})
include(${AURORAFW_MODULE_CORE_DIR}/module.cmake)

message(STATUS "Build system loaded")