cmake_minimum_required(VERSION 3.16)
project(chapter_40)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    # warning flags
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# static check
find_program(CMAKE_CXX_CPPCHECK NAMES cppcheck)
if(CMAKE_CXX_CPPCHECK)
	list(APPEND CMAKE_CXX_CPPCHECK "--enable=all")
endif()

# main
add_executable(${PROJECT_NAME}_main  src/main.cc)
target_include_directories(${PROJECT_NAME}_main PRIVATE include)
