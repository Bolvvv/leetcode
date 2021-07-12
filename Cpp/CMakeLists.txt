# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# 项目信息
project (leetcode_test)

# 指定生成目标
add_executable(leetcode_test 78_subsets.cpp)
