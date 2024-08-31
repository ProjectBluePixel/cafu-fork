cmake_minimum_required(VERSION 3.12)

project(CaLib)

file(GLOB_RECURSE SRC_FILES src/*.cpp src/*.hpp)

group_sources(SRC_FILES)

add_library(${PROJECT_NAME} STATIC ${SRC_FILES})

target_link_libraries(${PROJECT_NAME} glfw CaCommon MersenneTwister lua Cg MersenneTwister)

target_include_directories(${PROJECT_NAME} PUBLIC src)