cmake_minimum_required (VERSION 3.21)

add_executable("33_Homework_4" main.cpp ${MY_INCLUDE_DIR}/function.h)
target_include_directories("33_Homework_4" PUBLIC ${MY_INCLUDE_DIR})