cmake_minimum_required(VERSION 3.12)

project(CaLight)

file(GLOB_RECURSE SRC_FILES src/*.cpp src/*.hpp)

group_sources(SRC_FILES)

add_executable(CaLight ${SRC_FILES})

target_link_libraries(CaLight CaLib)