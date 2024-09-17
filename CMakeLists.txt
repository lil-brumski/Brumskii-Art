cmake_minimum_required(VERSION 3.20.3)

project(Brumskii-Art VERSION 1.0 DESCRIPTION "A project that displays your name using ASCII characters.")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES "src/*.cpp")

add_executable(Brumskii-Art.o main.cpp ${SOURCES})

target_include_directories(Brumskii-Art.o PRIVATE include)