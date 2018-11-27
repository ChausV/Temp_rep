cmake_minimum_required(VERSION 2.8)

add_library(lib_one STATIC ns1.cpp)
add_library(lib_two SHARED ns2.cpp)
add_executable(a.out main.cpp)

target_link_libraries(a.out lib_one lib_two)