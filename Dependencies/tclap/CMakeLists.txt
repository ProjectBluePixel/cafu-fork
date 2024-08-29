project(tclap)

file(GLOB_RECURSE SRC_FILES tclap/*.h)

add_library(tclap ${SRC_FILES})

target_include_directories(tclap PRIVATE .)