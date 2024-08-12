//
// Created by Jeremy Novak on 8/12/24.
//

#include <gtest/gtest.h>
#include "solution.h"

class RemoveElementTest : public ::testing::Test {
protected:
   Solution solution;
};

TEST_F(RemoveElementTest, Example1) {
   std::vector<int> nums = {3, 2, 2, 3};
   int val = 3;
   int result = solution.remove_element(nums, val);
   EXPECT_EQ(result, 2);
   std::vector<int> expected = {2, 2};
   EXPECT_TRUE(std::equal(nums.begin(), nums.begin() + result, expected.begin()));
}

TEST_F(RemoveElementTest, Example2) {
   std::vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
   int val = 2;
   int result = solution.remove_element(nums, val);
   EXPECT_EQ(result, 5);
   std::vector<int> expected = {0, 1, 3, 0, 4};
   EXPECT_TRUE(std::equal(nums.begin(), nums.begin() + result, expected.begin()));
}

TEST_F(RemoveElementTest, EmptyArray) {
   std::vector<int> nums = {};
   int val = 1;
   int result = solution.remove_element(nums, val);
   EXPECT_EQ(result, 0);
}

TEST_F(RemoveElementTest, AllElementsRemoved) {
   std::vector<int> nums = {1, 1, 1, 1};
   int val = 1;
   int result = solution.remove_element(nums, val);
   EXPECT_EQ(result, 0);
}

TEST_F(RemoveElementTest, NoElementsRemoved) {
   std::vector<int> nums = {1, 2, 3, 4, 5};
   int val = 6;
   int result = solution.remove_element(nums, val);
   EXPECT_EQ(result, 5);
   EXPECT_TRUE(std::equal(nums.begin(), nums.end(), std::vector<int>{1, 2, 3, 4, 5}.begin()));
}

TEST_F(RemoveElementTest, SingleElement) {
   std::vector<int> nums = {1};
   int val = 1;
   int result = solution.remove_element(nums, val);
   EXPECT_EQ(result, 0);
}

TEST_F(RemoveElementTest, LargeArray) {
   std::vector<int> nums(1000, 1);
   nums[500] = 2;
   int val = 1;
   int result = solution.remove_element(nums, val);
   EXPECT_EQ(result, 1);
   EXPECT_EQ(nums[0], 2);
}