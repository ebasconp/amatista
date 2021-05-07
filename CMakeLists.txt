cmake_minimum_required(VERSION 3.16)
project(amatista)

set(CMAKE_CXX_STANDARD 20)

add_library(amatista SHARED code/amt/control.cpp code/amt/control.h)


