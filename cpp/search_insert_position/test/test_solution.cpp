#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  vector<int> input = {1, 3, 5, 6};
  constexpr int target = 5;
  const int result = solution.search_insert(input, target);
  constexpr int expected = 2;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  vector<int> input = {1, 3, 5, 6};
  constexpr int target = 2;
  const int result = solution.search_insert(input, target);
  constexpr int expected = 1;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  vector<int> input = {1, 3, 5, 6};
  constexpr int target = 7;
  const int result = solution.search_insert(input, target);
  constexpr int expected = 4;
  EXPECT_EQ(result, expected);
}
