cmake_minimum_required(VERSION 3.28.0)
project(stack)

include_directories(include)
link_directories(lib)

add_library(stack_lib ./lib/stack.cpp)

set(EXECUTABLE_OUTPUT_PATH ../bin)
add_executable(stack "./src/stack_main.cpp")

target_link_libraries(stack stack_lib)
