cmake_minimum_required(VERSION 3.10)
project(trickcpp)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-O3 -std=c++17 -pthread")
add_executable(check_two_numbers_equal src/check_equal_without_relational_operator.cpp)
add_executable(print_nos_without_semicolon src/print_nos_without_semicolon.cpp)
add_executable(endian_computer src/endian_computer.cpp)
add_executable(divide_by_four src/divide_by_four.cpp)
add_executable(verify_if_block src/verify_if_block.cpp)
add_executable(sum_of_nos_without_addition_operator src/sum_of_nos_without_addition_operator.cpp)
add_executable(max_value_of_unsigned_int src/max_value_of_unsigned_int.cpp)
add_executable(max_and_min src/max_and_min.cpp)
add_executable(swap_without_extra src/swap_without_extra.cpp)