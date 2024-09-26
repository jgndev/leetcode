#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  std::vector<int> nums1 = {1, 2, 3};
  std::vector<int> nums2 = {2, 4};

  const int result = solution.getCommon(nums1, nums2);
  constexpr int expected = 2;

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::vector<int> nums1 = {1, 2, 3, 6};
  std::vector<int> nums2 = {2, 3, 4, 5};

  const int result = solution.getCommon(nums1, nums2);
  constexpr int expected = 2;

  EXPECT_EQ(result, expected);
}
