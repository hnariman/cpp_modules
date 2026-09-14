cmake_minimum_required(VERSION 3.30 FATAL_ERROR)

project(st LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE BOOL "" FORCE)


add_executable(st)

target_sources(st 
  PRIVATE
    src/main.cpp
  PUBLIC FILE_SET CXX_MODULES FILES
    src/j.cpp
)

