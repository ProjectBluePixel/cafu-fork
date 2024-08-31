file(GLOB_RECURSE SRC_FILES Cg/*.cpp Cg/*.h)

add_library(Cg ${SRC_FILES})
set_target_properties(Cg PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(Cg PUBLIC .)