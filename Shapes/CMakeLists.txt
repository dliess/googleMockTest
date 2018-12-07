cmake_minimum_required (VERSION 2.8.11)

add_subdirectory(Mock)

add_library(shapes STATIC 
    Rectangle.cpp
    RatioCalculator.cpp
)
target_include_directories(shapes PUBLIC ${CMAKE_CURRENT_LIST_DIR})