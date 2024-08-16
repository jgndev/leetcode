#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    std::vector<std::vector<int>> moves = {{0, 0}, {2, 0}, {1, 1}, {2, 1}, {2, 2}};
    const std::string expected = "A";
    const std::string result = solution.tictactoe(moves);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    std::vector<std::vector<int>> moves = {{0, 0}, {1, 1}, {0, 1}, {0,2}, {1, 0}, {2, 0}};
    const std::string expected = "B";
    const std::string result = solution.tictactoe(moves);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    std::vector<std::vector<int>> moves = {{0, 0}, {1, 1}, {2, 0}, {1, 0}, {1, 2}, {2, 1}, {0, 1}, {0, 2}, {2, 2}};
    const std::string expected = "Draw";
    const std::string result = solution.tictactoe(moves);
    EXPECT_EQ(result, expected);
}
