cmake_minimum_required(VERSION 3.15)

project(lw2)

add_library(breakfast STATIC "breakfast.cpp")

add_executable(lw2 main.cpp)

target_link_libraries(lw2 breakfast)
