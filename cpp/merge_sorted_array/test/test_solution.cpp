//
// Created by Jeremy Novak on 8/14/24.
//
#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCase1) {
  std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  std::vector<int> nums2 = {2, 5, 6};
  int m = 3;
  int n = 3;

  solution.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1, 2, 2, 3, 5, 6};
  ASSERT_EQ(nums1, expected);
}

TEST_F(SolutionTest, TestCase2) {
  std::vector<int> nums1 = {1};
  std::vector<int> nums2 = {};
  int m = 1;
  int n = 0;

  solution.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1};
  ASSERT_EQ(nums1, expected);
}

TEST_F(SolutionTest, TestCase3) {
  std::vector<int> nums1 = {0};
  std::vector<int> nums2 = {1};
  int m = 0;
  int n = 1;

  solution.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1};
  ASSERT_EQ(nums1, expected);
}