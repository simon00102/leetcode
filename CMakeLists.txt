cmake_minimum_required(VERSION 3.10)

project(Leetcode)

find_package(fmt CONFIG REQUIRED)

add_executable(test test.cpp)
target_link_libraries(test PRIVATE fmt::fmt)

add_subdirectory(src)