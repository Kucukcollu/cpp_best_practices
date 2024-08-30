cmake_minimum_required(VERSION 3.16)
project(chapter_05)

set(CMAKE_CXX_STANDARD 17)

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_compile_options(-Weverything)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    message("Compiler ------> GNU")
    add_compile_options(-Wall -Wextra -Wpedantic -Wconversion -Wduplicated-cond -Wduplicated-branches -Wnull-dereference -Wuseless-cast)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
add_compile_options(/W4 /Wall /permissive)
endif()

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# main
add_executable(${PROJECT_NAME}_main  src/main.cc)
target_include_directories(${PROJECT_NAME}_main PRIVATE include)
