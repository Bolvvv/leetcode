# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# 项目信息
project (leetcode_test)

# 指定生成目标
add_executable(leetcode_test 46_permute.cpp 48_rotate.cpp 53.cpp 54_spiral_order.cpp 55_can_jump.cpp)
