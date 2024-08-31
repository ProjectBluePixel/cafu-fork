file(GLOB_RECURSE SRC_FILES src/*.h)

add_library(MersenneTwister STATIC ${SRC_FILES})
set_target_properties(MersenneTwister PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(MersenneTwister PUBLIC src)