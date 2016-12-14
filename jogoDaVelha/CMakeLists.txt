cmake_minimum_required(VERSION 2.6)

project(jogoDaVelha)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


add_executable(start source/square.cpp source/board.cpp source/main.cpp)
add_executable(runTest source/square.cpp source/board.cpp unitTest/testBoard.cpp)


install(TARGETS start DESTINATION bin)
target_link_libraries(runTest -lgtest -lpthread)
