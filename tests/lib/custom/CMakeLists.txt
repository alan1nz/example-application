# Copyright (c) 2021, Legrand North America, LLC.
# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

add_subdirectory(${CATCH2_DIR} ${CMAKE_BINARY_DIR}/catch2)

project(app_lib_custom_test)

add_executable(app_lib_custom_test
    src/main.cpp
)

target_link_libraries(app_lib_custom_test PRIVATE
    Catch2::Catch2WithMain
)


