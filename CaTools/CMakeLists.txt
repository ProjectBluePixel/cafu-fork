cmake_minimum_required(VERSION 3.12)

project(CaTools)

file(GLOB_RECURSE SRC_FILES src/*.cpp src/*.h)

add_executable(CaTools ${SRC_FILES})

#target_link_libraries(CaTools CAFU)