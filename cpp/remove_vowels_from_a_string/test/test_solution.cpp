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
  std::string input = "leetcodeisacommunityforcoders";
  const std::string expected = "ltcdscmmntyfrcdrs";
  const std::string result = solution.remove_vowels(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::string input = "aeiou";
  const std::string expected = "";
  const std::string result = solution.remove_vowels(input);
  EXPECT_EQ(result, expected);
}