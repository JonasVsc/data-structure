cmake_minimum_required(VERSION 3.28.0)
project(queue)

include_directories(./include)
add_library(queue_lib ./lib/queue.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)
add_executable(queue ./src/queue_main.cpp)

target_link_libraries(queue queue_lib)