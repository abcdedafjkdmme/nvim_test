cmake_minimum_required(VERSION 3.7...3.28)

set (CMAKE_CXX_STANDARD 20)

project(NvimTest VERSION 1.0 LANGUAGES CXX)

message(${CMAKE_CXX_COMPILER_ID})

add_executable(NvimTest main.cpp)

if ( CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
  target_compile_options(NvimTest PRIVATE -Wall -Wextra -g3 -pthread -gdwarf-4 -Wno-deprecated -pipe -Wno-return-type -Wall -Wextra -Wpedantic -Wvla -Wnull-dereference -Wswitch-enum -Wduplicated-cond -Wsuggest-override)
endif()


