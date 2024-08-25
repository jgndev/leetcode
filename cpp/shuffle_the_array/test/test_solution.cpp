#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    std::vector<int> input = {2, 5, 1, 3, 4, 7};
    constexpr int n = 3;
    const std::vector<int> expected = {2, 3, 5, 4, 1, 7};
    const std::vector<int> result = solution.shuffle(input, n);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    std::vector<int> input = {1, 2, 3, 4, 4, 3, 2, 1};
    constexpr int n = 4;
    const std::vector<int> expected = {1, 4, 2, 3, 3, 2, 4, 1};
    const std::vector<int> result = solution.shuffle(input, n);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    std::vector<int> input = {1, 1, 2, 2};
    constexpr int n = 2;
    const std::vector<int> expected = {1, 2, 1, 2};
    const std::vector<int> result = solution.shuffle(input, n);
    EXPECT_EQ(result, expected);
}
