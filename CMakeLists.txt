cmake_minimum_required(VERSION 3.30 FATAL_ERROR)

project(st LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE BOOL "" FORCE)

# include =============================
find_package(GTest REQUIRED)
include(GoogleTest)
enable_testing()


# app ===============================
add_executable(st)
target_sources(st 
  PRIVATE
    src/main.cpp
  PUBLIC FILE_SET CXX_MODULES FILES
    src/j.cpp
)


# tests ==============================
add_executable(st_test test/test_main.cpp)
target_sources(st_test 
  PRIVATE FILE_SET CXX_MODULES FILES
  src/j.cpp
)
target_link_libraries(st_test
  PRIVATE
    GTest::gtest_main
    GTest::gmock
)

gtest_discover_tests(st_test)
