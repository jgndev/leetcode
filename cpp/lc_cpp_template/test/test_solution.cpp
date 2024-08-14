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
    // const std::string s = "  fly me to the moon  ";
    const int result = solution.function_name();
    constexpr int expected = 0;
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    // const std::string s = "Hello World";
    const int result = solution.function_name();
    constexpr int expected = 0;
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    // const std::string s = "  wood chuck would chuck wood   ";
    const int result = solution.function_name();
    constexpr int expected = 0;
    EXPECT_EQ(result, expected);
}