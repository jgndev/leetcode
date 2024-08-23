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
  constexpr int n = 3;
  const std::vector<std::string> expected = {"1", "2", "Fizz"};
  const std::vector<std::string> result = solution.fizz_buzz(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  constexpr int n = 5;
  const std::vector<std::string> expected = {"1", "2", "Fizz", "4", "Buzz"};
  const std::vector<std::string> result = solution.fizz_buzz(n);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  constexpr int n = 15;
  const std::vector<std::string> expected = {"1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"};
  const std::vector<std::string> result = solution.fizz_buzz(n);
  EXPECT_EQ(result, expected);
}
