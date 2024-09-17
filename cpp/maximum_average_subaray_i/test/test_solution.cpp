#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    const std::vector<int> nums = {1, 12, -5, -6, 50, 3};
    constexpr int k = 4;
    EXPECT_DOUBLE_EQ(solution.find_max_average(nums, k), 12.75);
}

TEST_F(SolutionTest, TestCaseTwo) {
    const std::vector<int> nums = {5};
    constexpr int k = 1;
    EXPECT_DOUBLE_EQ(solution.find_max_average(nums, k), 5.0);
}

TEST_F(SolutionTest, TestCaseThree) {
    const std::vector<int> nums = {-1, -2, -3, -4, -5};
    constexpr int k = 3;
    EXPECT_DOUBLE_EQ(solution.find_max_average(nums, k), -2.0);
}

TEST_F(SolutionTest, TestCaseFour) {
    const std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    constexpr int k = 3;
    EXPECT_DOUBLE_EQ(solution.find_max_average(nums, k), 9.0);
}

TEST_F(SolutionTest, TestCaseFive) {
    const std::vector<int> nums = {100000, 200000, 300000, 400000};
    constexpr int k = 2;
    EXPECT_DOUBLE_EQ(solution.find_max_average(nums, k), 350000.0);
}