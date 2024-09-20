#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
};

TEST_F(SolutionTest, TestCaseOne) {
  const std::vector<int> input = {-3, 2, -3, 4, 2};
  constexpr int expected = 5;
  const int result = Solution::minStartValue(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  const std::vector<int> input = {1, 2};
  constexpr int expected = 1;
  const int result = Solution::minStartValue(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  const std::vector<int> input = {1, -2, -3};
  constexpr int expected = 5;
  const int result = Solution::minStartValue(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  const std::vector<int> input = {};
  constexpr int expected = 1;
  const int result = Solution::minStartValue(input);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  const std::vector<int> input = {3, 2, 5, 4};
  constexpr int expected = 1;
  const int result = Solution::minStartValue(input);
  EXPECT_EQ(result, expected);
}
