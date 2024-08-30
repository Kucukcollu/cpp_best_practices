cmake_minimum_required(VERSION 3.16)
project(chapter_03)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Wno-dev -g")

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

find_package(Catch2 REQUIRED)
find_package(doctest REQUIRED)
find_package(GTest REQUIRED)

# custom_math_lib
add_library(custom_math_lib STATIC src/custom_math_lib.cc)

# main
add_executable(${PROJECT_NAME}_main  src/main.cc)
target_include_directories(${PROJECT_NAME}_main PRIVATE include)
target_link_libraries(${PROJECT_NAME}_main custom_math_lib)

# tests

enable_testing()

## catch2 test
add_executable(catch2_test test/catch2_test/test_sum.cc)
target_link_libraries(catch2_test PRIVATE Catch2::Catch2WithMain custom_math_lib)

add_test(
    NAME catch2_test
    COMMAND $<TARGET_FILE:catch2_test>
)

## doctest test
add_executable(doctest_test test/doctest_test/test_sum.cc)
target_link_libraries(doctest_test PRIVATE doctest::doctest custom_math_lib)

add_test(
    NAME doctest_test
    COMMAND $<TARGET_FILE:doctest_test>
)

## gtest_test
add_executable(gtest_test test/gtest_test/test_sum.cc)
target_link_libraries(gtest_test PRIVATE GTest::gtest_main custom_math_lib)

add_test(
    NAME gtest_test
    COMMAND $<TARGET_FILE:gtest_test>
)