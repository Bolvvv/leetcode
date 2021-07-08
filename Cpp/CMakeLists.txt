# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# 项目信息
project (leetcode_test)

# 指定生成目标
add_executable(leetcode_test 56_merge.cpp 57_insert.cpp 59_generate_matrix.cpp 73_set_zeroes.cpp 74_search_matrix.cpp 75_sort_colors.cpp 80_remove_duplicates.cpp)
