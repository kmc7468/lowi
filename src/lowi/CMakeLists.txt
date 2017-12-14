cmake_minimum_required(VERSION 3.0.0)
project(lowi)

set(CMAKE_EXPORT_COMPILE_COMMANDS "ON")

set(INCLUDE_DIR "../../include")
set(SOURCE_DIR "./")
set(OUTPUT_DIR "../../bin")

include_directories(${INCLUDE_DIR})
file(GLOB SOURCE_LIST ${SOURCE_DIR}/*.cc ${SOURCE_DIR}/architectures/*.cc ${SOURCE_DIR}/instructions/*.cc ${SOURCE_DIR}/registers/*.cc)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})

add_library(${PROJECT_NAME} ${SOURCE_LIST})

set(CMAKE_CXX_COMPILER "clang++")
set(EXTRA_COMPILER_OPTIONS -std=c++14 -Wall -D__STDC_CONSTANT_MACROS -D__STDC_LIMIT_MACROS)

target_compile_options(${PROJECT_NAME} PRIVATE ${EXTRA_COMPILER_OPTIONS})