cmake_minimum_required(VERSION 3.20)
project(LeetCode C)

set(CMAKE_C_STANDARD 99)

include_directories(LeetCode include)
include_directories(LeetCode leetcode/editor/cn/include)
add_executable(LeetCode main.c)

add_executable(LC_583_DeleteOperationForTwoStrings leetcode/editor/cn/LC_583_DeleteOperationForTwoStrings.c leetcode/editor/cn/include/leetcode.h leetcode/editor/cn/include/leetcode.h)