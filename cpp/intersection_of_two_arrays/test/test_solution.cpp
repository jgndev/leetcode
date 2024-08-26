#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  vector<int> nums1 = {1, 2, 2, 1};
  vector<int> nums2 = {2, 2};
  const vector<int> result = solution.intersection(nums1, nums2);
  const vector<int> expected = {2};
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  vector<int> nums1 = {4, 9, 5};
  vector<int> nums2 = {9, 4, 9, 8, 4};
  const vector<int> result = solution.intersection(nums1, nums2);
  const vector<int> expected = {4, 9};
  EXPECT_EQ(result, expected);
}
