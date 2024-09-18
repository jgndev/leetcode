#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    const std::vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    constexpr int k = 2;
    constexpr int expected = 6;
    const int result = solution.longest_ones(nums, k);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    const std::vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    constexpr int k = 3;
    constexpr int expected = 10;
    const int result = solution.longest_ones(nums, k);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    const std::vector<int> nums = {0,0,0,0,0};
    constexpr int k = 2;
    constexpr int expected = 2;
    const int result = solution.longest_ones(nums, k);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
    const std::vector<int> nums = {1,1,1,1,1};
    constexpr int k = 0;
    constexpr int expected = 5;
    const int result = solution.longest_ones(nums, k);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
    const std::vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    constexpr int k = 20;
    constexpr int expected = 19;
    const int result = solution.longest_ones(nums, k);
    EXPECT_EQ(result, expected);
}