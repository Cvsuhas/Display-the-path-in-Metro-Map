cmake_minimum_required(VERSION 3.12.0)
project(Display_path_in_metro_map)

#Set c++ standard (eg: c++ 17)
set(CMAKE_CXX_STANDARD 17)

#include header files
include_directories(include)

#create graph library from c++ files
add_library(graph src/Green.cpp src/Purple.cpp src/Graph.cpp)

#add executable main
add_executable(main src/main.cpp)

#link executable and library
target_link_libraries(main graph)