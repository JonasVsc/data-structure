cmake_minimum_required(VERSION 3.28.0)
project(Dynamic_Stack)

include_directories("./include")
add_library(dynamic_stack_lib "./lib/dynamic_stack.cpp")

set(EXECUTABLE_OUTPUT_PATH "../bin")


add_executable(dynamic_stack "./src/main_dynamic_stack.cpp")


target_link_libraries(dynamic_stack dynamic_stack_lib)