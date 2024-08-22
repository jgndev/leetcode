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
  std::vector<std::string> input = {"bella", "label", "roller"};
  std::vector<std::string> expected = {"e", "l", "l"};
  std::vector<std::string> result = solution.common_chars(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::vector<std::string> input = {"cool", "lock", "cook"};
  std::vector<std::string> expected = {"c", "o"};
  std::vector<std::string> result = solution.common_chars(input);
  EXPECT_EQ(result, expected);
}
