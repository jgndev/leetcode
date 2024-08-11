cmake_minimum_required(VERSION 3.28)
project(remove_duplicates_from_sorted_array)

set(CMAKE_CXX_STANDARD 17)

# Find the Google Test package
find_package(GTest REQUIRED)

# Include directories
include_directories(include ${GTEST_INCLUDE_DIRS})

# Add your solution library
add_library(solution src/solution.cpp)
target_include_directories(solution PUBLIC include)

# Enable testing
enable_testing()

# Add the test executable
add_executable(test_solution test/test_solution.cpp)

# Link the test executable with Google Test and your solution library
target_link_libraries(test_solution ${GTEST_BOTH_LIBRARIES} solution)

# Add the test
add_test(NAME SolutionTest COMMAND test_solution)

# Add custom target for running tests
add_custom_target(run_tests
        COMMAND ${CMAKE_CTEST_COMMAND} -V
        DEPENDS test_solution
)