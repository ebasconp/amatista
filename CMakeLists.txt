cmake_minimum_required(VERSION 3.16)
project(amatista)

set(CMAKE_CXX_STANDARD 20)

add_library(amatista SHARED
        code/amt/control.cpp code/amt/control.h
        code/amt/geom/dimension.cpp code/amt/geom/dimension.h
        code/amt/geom/position.cpp code/amt/geom/position.h
        code/amt/geom/bounds.cpp code/amt/geom/bounds.h
        code/amt/events/event_handler_list.h
        code/amt/events/property_changed_event.h
        code/amt/events/event.h
        code/amt/events/event.cpp code/amt/events/property_changed_event_handler.h)

include_directories(code)


