#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  std::vector<int> nums = {1, 2, 3, 1};
  constexpr bool expected = true;
  const bool result = solution.containsDuplicate(nums);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::vector<int> nums = {1, 2, 3, 4};
  constexpr bool expected = false;
  const bool result = solution.containsDuplicate(nums);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  std::vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  constexpr bool expected = true;
  const bool result = solution.containsDuplicate(nums);
  EXPECT_EQ(result, expected);
}