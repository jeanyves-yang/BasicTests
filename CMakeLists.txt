# This is the root ITK CMakeList file: 
cmake_minimum_required(VERSION 2.8)

# This project is designed to be built outside the Insight source tree.
project(AddNumbers)

add_executable(AddNumbers AddNumbers.cxx)

add_library(AddNumbersLib STATIC AddNumbers.cxx)
set_target_properties(AddNumbersLib PROPERTIES COMPILE_FLAGS "-Dmain=Number")

option(BUILD_TESTING "Build the testing tree" ON)

IF(BUILD_TESTING)
  include(CTest)
  ADD_SUBDIRECTORY(Testing)
ENDIF(BUILD_TESTING)


