//
// Created by Jeremy Novak on 8/14/24.
//
#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, Example1) {
  std::vector<int> nums = {1,2,3,1,1,3};
  EXPECT_EQ(solution.number_of_good_pairs(nums), 4);
}

TEST_F(SolutionTest, Example2) {
  std::vector<int> nums = {1,1,1,1};
  EXPECT_EQ(solution.number_of_good_pairs(nums), 6);
}

TEST_F(SolutionTest, NoGoodPairs) {
  std::vector<int> nums = {1,2,3,4,5};
  EXPECT_EQ(solution.number_of_good_pairs(nums), 0);
}

TEST_F(SolutionTest, SingleElement) {
  std::vector<int> nums = {1};
  EXPECT_EQ(solution.number_of_good_pairs(nums), 0);
}

TEST_F(SolutionTest, MixedRepeats) {
  std::vector<int> nums = {1,2,3,1,1,3,2,2};
  EXPECT_EQ(solution.number_of_good_pairs(nums), 7);
}