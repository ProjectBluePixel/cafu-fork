cmake_minimum_required(VERSION 3.12)
project(Ca3DE)

file(GLOB_RECURSE SRC_FILES src/*.cpp src/*.hpp src/*.rc)

group_sources(SRC_FILES)

add_executable(Ca3DE ${SRC_FILES})

target_link_libraries(Ca3DE CaLib CaCommon glfw bullet lua)

target_include_directories(Ca3DE PRIVATE src)