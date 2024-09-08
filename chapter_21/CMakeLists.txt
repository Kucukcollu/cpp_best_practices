cmake_minimum_required(VERSION 3.16)
project(chapter_21)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/src)

SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
add_compile_options(-Wall -Wextra -Wpedantic -Wconversion -Wduplicated-cond -Wduplicated-branches -Wnull-dereference -Wuseless-cast)
endif()

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -header-filter=.;
    -checks=modernize-loop-convert;)

# main
add_executable(${PROJECT_NAME}_main  src/main.cc)
target_include_directories(${PROJECT_NAME}_main PRIVATE include)
