cmake_minimum_required(VERSION 3.16)
project(amatista)

set(CMAKE_CXX_STANDARD 20)

add_library(amatista SHARED
        code/amt/control.cpp code/amt/control.h
        code/amt/geom/dimension.cpp code/amt/geom/dimension.h
        code/amt/geom/position.cpp code/amt/geom/position.h
        code/amt/geom/bounds.cpp code/amt/geom/bounds.h)


