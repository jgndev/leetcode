#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  std::vector<int> nums = {1, 3, 2, 6, 2};
  constexpr int k = 1;
  const std::vector<int> expected = {-1, 2, 3, 3, -1};
  const std::vector<int> result = Solution::getAverages(nums, k);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::vector<int> nums = {7, 4, 3, 9, 1, 8, 5, 2, 6};
  constexpr int k = 3;
  const std::vector<int> expected = {-1, -1, -1, 5, 4, 4, -1, -1, -1};
  const std::vector<int> result = Solution::getAverages(nums, k);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  std::vector<int> nums = {5, 2, 8, 1, 9};
  constexpr int k = 0;
  const std::vector<int> expected = {5, 2, 8, 1, 9};
  const std::vector<int> result = Solution::getAverages(nums, k);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
  std::vector<int> nums = {1, 2, 3, 4, 5};
  constexpr int k = 3;
  const std::vector<int> expected = {-1, -1, -1, -1, -1};
  const std::vector<int> result = Solution::getAverages(nums, k);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
  std::vector<int> nums = {100000, 200000, 300000, 400000, 500000};
  constexpr int k = 1;
  const std::vector<int> expected = {-1, 200000, 300000, 400000, -1};
  const std::vector<int> result = Solution::getAverages(nums, k);
  EXPECT_EQ(result, expected);
}