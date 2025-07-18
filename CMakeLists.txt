cmake_minimum_required(VERSION 3.18)
project(
    Cars
    VERSION 0.0.1
    DESCRIPTION "Matrix class"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)

add_executable(cars_class)

set(sources
   
    src/car.cpp
    src/car.h
    src/lorry.cpp
    src/lorry.h
    main.cpp
)

target_sources(cars_class PRIVATE ${sources})

target_include_directories(cars_class
    PUBLIC
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>"
)
