#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  const int result = solution.number_of_steps(14);
  constexpr int expected = 6;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  const int result = solution.number_of_steps(8);
  constexpr int expected = 4;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  const int result = solution.number_of_steps(123456);
  constexpr int expected = 22;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  const int result = solution.number_of_steps(1024);
  constexpr int expected = 11;
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  const int result = solution.number_of_steps(0);
  constexpr int expected = 0;
  EXPECT_EQ(result, expected);
}
