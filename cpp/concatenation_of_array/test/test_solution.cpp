#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    std::vector<int> nums = {1, 2, 1};
    const std::vector<int> expected = {1, 2, 1, 1, 2, 1};
    const std::vector<int> result = solution.get_concatenation(nums);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    std::vector<int> nums = {1, 3, 2, 1};
    const std::vector<int> expected = {1, 3, 2, 1, 1, 3, 2, 1};
    const std::vector<int> result = solution.get_concatenation(nums);
    EXPECT_EQ(result, expected);
}
