cmake_minimum_required(VERSION 3.12)
project(Ca3DE)

file(GLOB_RECURSE SRC_FILES src/*.cpp src/*.hpp)

add_executable(Ca3DE ${SRC_FILES})

target_link_libraries(Ca3DE CaLib CaCommon)

target_include_directories(Ca3DE PRIVATE src)