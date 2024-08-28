#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  std::string jewels = "aA";
  std::string stones = "aAAbbbb";
  const int result = solution.num_jewels_in_stones(jewels, stones);
  constexpr int expected = 3;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::string jewels = "z";
  std::string stones = "ZZ";
  const int result = solution.num_jewels_in_stones(jewels, stones);
  constexpr int expected = 0;
  EXPECT_EQ(result, expected);
}
