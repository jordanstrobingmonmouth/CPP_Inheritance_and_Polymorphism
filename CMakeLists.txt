cmake_minimum_required(VERSION 3.20)
project(Inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(Inheritance main.cpp GeometricObject.h GeometricObject.cpp Rectangle.h Rectangle.cpp Circle.h Circle.cpp Object.h Object.cpp)
