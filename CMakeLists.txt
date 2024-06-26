cmake_minimum_required(VERSION 3.14)
project(STL_TESTS)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(iostream OBJECT Tests/iostream.cpp)
add_library(filesystem OBJECT Tests/filesystem.cpp)

add_executable(stltest main.cpp)
target_link_libraries(stltest iostream filesystem)