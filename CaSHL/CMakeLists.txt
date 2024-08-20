cmake_minimum_required(VERSION 3.12)

project(CaSHL)

file(GLOB_RECURSE SRC_FILES src/*.cpp src/*.h)

add_executable(CaSHL ${SRC_FILES})

#target_link_libraries(CaSHL CAFU)