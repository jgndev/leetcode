#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  const std::vector<int> nums = {10, 5, 2, 6};
  constexpr int k = 100;
  EXPECT_EQ(solution.num_subarray_product_less_than_k(nums, k), 8);
}

TEST_F(SolutionTest, TestCaseTwo) {
  const std::vector<int> nums = {1, 1, 1, 1};
  constexpr int k = 2;
  EXPECT_EQ(solution.num_subarray_product_less_than_k(nums, k), 10);
}

TEST_F(SolutionTest, TestCaseThree) {
  const std::vector<int> nums = {1, 2, 3};
  constexpr int k = 0;
  EXPECT_EQ(solution.num_subarray_product_less_than_k(nums, k), 0);
}