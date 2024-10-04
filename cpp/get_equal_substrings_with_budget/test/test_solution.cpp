#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  const std::string s = "abcd";
  const std::string t = "bcdf";
  constexpr int maxCost = 3;
  constexpr int expected = 3;

  const int result = solution.equalSubstring(s, t, maxCost);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  const std::string s = "abcd";
  const std::string t = "cdef";
  constexpr int maxCost = 3;
  constexpr int expected = 1;

  const int result = solution.equalSubstring(s, t, maxCost);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  const std::string s = "abcd";
  const std::string t = "acde";
  constexpr int maxCost = 0;
  constexpr int expected = 1;

  const int result = solution.equalSubstring(s, t, maxCost);

  EXPECT_EQ(result, expected);
}