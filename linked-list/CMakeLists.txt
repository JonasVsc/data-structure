cmake_minimum_required(VERSION 3.28.0)
project(linkedList)

include_directories("./include")
add_library(linkedList_lib "./lib/linkedList.cpp")


set(EXECUTABLE_OUTPUT_PATH "../bin")

add_executable(LinkedList "./src/linkedList_main.cpp")
target_link_libraries(LinkedList linkedList_lib)


