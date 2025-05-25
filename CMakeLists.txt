cmake_minimum_required(VERSION 3.5)

project(sgemm-k1)
add_compile_options(-save-temps -march=rv64gcv)

include_directories(${CMAKE_SOURCE_DIR})

add_subdirectory(opt)
# add_executable(main main.cc)

