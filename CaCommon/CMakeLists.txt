cmake_minimum_required(VERSION 3.12)

project(CaCommon)

file(GLOB_RECURSE SRC_FILES *.cpp *.hpp)

add_library(${PROJECT_NAME} STATIC ${SRC_FILES})

#target_link_libraries(Common CAFU)

target_include_directories(${PROJECT_NAME} PUBLIC .)