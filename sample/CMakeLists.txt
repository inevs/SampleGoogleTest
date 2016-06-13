cmake_minimum_required(VERSION 2.8)

project(sample)

add_definitions(-std=c++11)

set(HEADER_FILES
        MyMath.h
        )

set(SOURCE_FILES
        MyMath.cpp)

add_library(sample STATIC ${SOURCE_FILES} ${HEADER_FILES})
