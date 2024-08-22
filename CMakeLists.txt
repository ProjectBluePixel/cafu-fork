project(Cafu)

include(cmake/utils.cmake)

add_subdirectory(Dependencies)
add_subdirectory(CaCommon)
add_subdirectory(CaLib)

add_subdirectory(Ca3DE)
add_subdirectory(CaBSP)
add_subdirectory(CaLight)
add_subdirectory(CaPVS)
add_subdirectory(CaSHL)
add_subdirectory(CaTools)
add_subdirectory(CaWE)