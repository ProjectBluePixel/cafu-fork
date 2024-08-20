cmake_minimum_required(VERSION 3.12)

project(CaWE)

file(GLOB_RECURSE SRC_FILES src/*.cpp src/*.h)

add_executable(CaWE ${SRC_FILES})

#target_link_libraries(CaWE CAFU)