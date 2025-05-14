cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_INTERPROCEDURAL_OPTIMIZATION TRUE)

if(MSVC) 
    add_compile_options(/arch:AVX2) #make sure SIMD optimizations take place
endif()

project(CustomExtensions)

file(GLOB_RECURSE CustomExtensions-sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c" "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h" "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp")

add_library(CustomExtensions SHARED ${CustomExtensions-sources})
target_include_directories(CustomExtensions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/)
source_group(CustomExtensions "${CMAKE_SOURCE_DIR}/src" PREFIX "Dll" FILES ${CustomExtensions-sources})
