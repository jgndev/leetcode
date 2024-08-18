#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    std::vector<int> nums = {2, 7, 11, 15};
    constexpr  int target = 9;
    const std::vector<int> expected = {0, 1};
    const std::vector<int> result = solution.two_sum(nums, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    std::vector<int> nums = {3, 2, 4};
    constexpr  int target = 6;
    const std::vector<int> expected = {1, 2};
    const std::vector<int> result = solution.two_sum(nums, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    std::vector<int> nums = {3, 3};
    constexpr  int target = 6;
    const std::vector<int> expected = {0, 1};
    const std::vector<int> result = solution.two_sum(nums, target);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
    std::vector<int> nums = {2, 7, 4, 1, 8};
    constexpr  int target = 22;
    const std::vector<int> expected = {-1, -1};
    const std::vector<int> result = solution.two_sum(nums, target);
    EXPECT_EQ(result, expected);
}
