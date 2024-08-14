//
// Created by Jeremy Novak on 8/14/24.
//
#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    const std::vector<std::string> operations = {"5", "2", "C", "D", "+"};
    constexpr int expected = 30;
    const int result = solution.baseball_game(operations);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    const std::vector<std::string> operations = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    constexpr int expected = 27;
    const int result = solution.baseball_game(operations);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    const std::vector<std::string> operations = {"1", "2", "3", "4", "5"};
    constexpr int expected = 15;
    const int result = solution.baseball_game(operations);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
    const std::vector<std::string> operations = {"1", "2", "3", "C", "C", "D", "+"};
    constexpr int expected = 6;
    const int result = solution.baseball_game(operations);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
    const std::vector<std::string> operations = {"1", "C" };
    constexpr int expected = 0;
    const int result = solution.baseball_game(operations);
    EXPECT_EQ(result, expected);
}
