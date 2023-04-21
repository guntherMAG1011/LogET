cmake_minimum_required(VERSION 3.0.0)
project(LogET VERSION 0.1.0)

add_library(LogET INTERFACE)
target_include_directories(LogET INTERFACE ${CMAKE_SOURCE_DIR}/include/LogET)

add_subdirectory(examples)
