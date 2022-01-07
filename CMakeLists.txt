cmake_minimum_required(VERSION 3.21)
project(gbc)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(include)
set(SOURCE_FILES
        src/cpu/CPU.cpp
        main.cpp)
add_executable(gbc ${SOURCE_FILES})
