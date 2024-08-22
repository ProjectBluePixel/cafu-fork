file(GLOB_RECURSE SRC_FILES src/*.h)

group_sources(SRC_FILES)

add_library(MersenneTwister STATIC ${SRC_FILES})

target_include_directories(MersenneTwister PUBLIC src)