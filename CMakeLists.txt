cmake_minimum_required(VERSION 3.31.6)

project(SdlClock)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_REQUIRED ON)

set(CAMKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)

include(cmake/raylib_fetch.cmake)

add_executable(clock main.cpp)

target_link_libraries(clock PRIVATE raylib)
