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
    const std::string input = "Hello, World!";
    const std::string expected = "hello, world!";
    const std::string result = solution.to_lower_case(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    const std::string input = "SHOUTING FROM THE ROOF TOPS";
    const std::string expected = "shouting from the roof tops";
    const std::string result = solution.to_lower_case(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    const std::string input = "A";
    const std::string expected = "a";
    const std::string result = solution.to_lower_case(input);
    EXPECT_EQ(result, expected);
}