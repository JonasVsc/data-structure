cmake_minimum_required(VERSION 3.28.0)
project(HashTable)

include_directories("./include")
add_library(hash_table_lib "./lib/hash_table.cpp")

set(EXECUTABLE_OUTPUT_PATH "../bin")

add_executable(hash_table "./src/hash_table_main.cpp")
target_link_libraries(hash_table hash_table_lib)