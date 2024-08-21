//
// Created by Jeremy Novak on 8/14/24.
//
#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  const std::string input = "hello";
  constexpr int expected = 13;
  const int result = solution.score_of_string(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  const std::string input = "zaz";
  constexpr int expected = 50;
  const int result = solution.score_of_string(input);
  EXPECT_EQ(result, expected);
}