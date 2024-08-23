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
  std::string input = "aba";
  constexpr bool expected = true;
  const bool result = solution.valid_palindrome(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::string input = "abca";
  constexpr bool expected = true;
  const bool result = solution.valid_palindrome(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  std::string input = "abc";
  constexpr bool expected = false;
  const bool result = solution.valid_palindrome(input);
  EXPECT_EQ(result, expected);
}