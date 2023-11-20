cmake_minimum_required(VERSION 3.28.0)
project(Dynamic_Queue)

include_directories("./include")
add_library(dynamic_queue_lib "./lib/dynamic_queue.cpp")

set(EXECUTABLE_OUTPUT_PATH "../bin")

add_executable(dynamic_queue "./src/dynamic_queue_main.cpp")
target_link_libraries(dynamic_queue dynamic_queue_lib)