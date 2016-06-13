cmake_minimum_required(VERSION 2.8)
project(Sample)

add_definitions(-std=c++11)

set(SOURCE_FILES main.cpp)
add_executable(sample_run ${SOURCE_FILES})

include_directories(sample)

add_subdirectory(sample)
add_subdirectory(sample_tests)

target_link_libraries(sample_run sample)
