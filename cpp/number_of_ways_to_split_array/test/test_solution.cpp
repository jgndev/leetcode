#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    const std::vector<int> nums = {};
    const int result = solution.ways_to_split_array(nums);
    constexpr int expected = 0;
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    const std::vector<int> nums = {5};
    const int result = solution.ways_to_split_array(nums);
    constexpr int expected = 0;
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    const std::vector<int> nums = {10, 4};
    const int result = solution.ways_to_split_array(nums);
    constexpr int expected = 1;
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
    const std::vector<int> nums = {2, 3, 1, 0};
    const int result = solution.ways_to_split_array(nums);
    constexpr int expected = 2;
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
    const std::vector<int> nums = {1000000000, 1000000000, 1000000000, 1000000000};
    const int result = solution.ways_to_split_array(nums);
    constexpr int expected = 2;
    EXPECT_EQ(result, expected);
}