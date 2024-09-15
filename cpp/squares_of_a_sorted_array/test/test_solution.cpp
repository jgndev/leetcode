#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    std::vector<int> input = {-4, -1, 0, 3, 10};
    const std::vector<int> expected = {0, 1, 9, 16, 100};
    const std::vector<int> result = solution.sorted_squares(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    std::vector<int> input = {1, 2, 3, 4, 5};
    const std::vector<int> expected = {1, 4, 9, 16, 25};
    const std::vector<int> result = solution.sorted_squares(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    std::vector<int> input = {-7};
    const std::vector<int> expected = {49};
    const std::vector<int> result = solution.sorted_squares(input);
    EXPECT_EQ(result, expected);
}