# Copyright 2026 Ion Gaztanaga
# Distributed under the Boost Software License, Version 1.0.
# https://www.boost.org/LICENSE_1_0.txt

cmake_minimum_required(VERSION 3.5...3.16)

project(boost_ig_gha_testing VERSION "${BOOST_SUPERPROJECT_VERSION}" LANGUAGES CXX)

#Header-only library with no headers: the target only exists so that the
#superproject adds this directory and its tests
add_library(boost_ig_gha_testing INTERFACE)
add_library(Boost::ig_gha_testing ALIAS boost_ig_gha_testing)

if(BUILD_TESTING AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/test/CMakeLists.txt")

  add_subdirectory(test)

endif()
