cmake_minimum_required(VERSION 3.28)
project(plus_one)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)

include_directories(include ${GTEST_INCLUDE_DIRS})

add_library(solution src/solution.cpp)
target_include_directories(solution PUBLIC include)

enable_testing()

add_executable(test_solution test/test_solution.cpp)

target_link_libraries(test_solution ${GTEST_BOTH_LIBRARIES} solution)

add_test(NAME SolutionTest COMMAND test_solution)