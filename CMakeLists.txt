cmake_minimum_required(VERSION 3.20)
project(LeetCode C)

set(CMAKE_C_STANDARD 99)

include_directories(LeetCode
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/leetcode/editor/cn/include)
add_executable(LeetCode main.c)

add_executable(LC_583_DeleteOperationForTwoStrings leetcode/editor/cn/LC_583_DeleteOperationForTwoStrings.c leetcode/editor/cn/include/leetcode.h leetcode/editor/cn/include/leetcode.h)
add_executable(LC_66_PlusOne leetcode/editor/cn/LC_66_PlusOne.c)
add_executable(LC_69_Sqrtx leetcode/editor/cn/LC_69_Sqrtx.c)