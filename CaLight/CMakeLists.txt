cmake_minimum_required(VERSION 3.12)

project(CaLight)

file(GLOB_RECURSE SRC_FILES src/*.cpp src/*.h)

add_executable(CaLight ${SRC_FILES})

#target_link_libraries(CaLight CAFU)