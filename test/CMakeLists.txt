# Copyright 2026 Ion Gaztanaga
# Distributed under the Boost Software License, Version 1.0.
# https://www.boost.org/LICENSE_1_0.txt

include(BoostTest OPTIONAL RESULT_VARIABLE HAVE_BOOST_TEST)

if(NOT HAVE_BOOST_TEST)
  return()
endif()

set(BOOST_TEST_LINK_LIBRARIES Boost::ig_gha_testing)

#Every .cpp file in this directory is a test, as in Jamfile.v2
file(GLOB tests RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)

foreach(test IN LISTS tests)
  boost_test(SOURCES ${test})
endforeach()
