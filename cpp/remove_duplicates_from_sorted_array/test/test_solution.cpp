//
// Created by Jeremy Novak on 8/11/24.
//

#include <gtest/gtest.h>
#include "solution.h" // Assuming your Solution class is in this header

class RemoveDuplicatesTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(RemoveDuplicatesTest, EmptyVector) {
    std::vector<int> nums;
    EXPECT_EQ(solution.removeDuplicates(nums), 0);
    EXPECT_TRUE(nums.empty());
}

TEST_F(RemoveDuplicatesTest, SingleElement) {
    std::vector<int> nums = {1};
    EXPECT_EQ(solution.removeDuplicates(nums), 1);
    EXPECT_EQ(nums, std::vector<int>({1}));
}

TEST_F(RemoveDuplicatesTest, NoDuplicates) {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    EXPECT_EQ(solution.removeDuplicates(nums), 5);
    EXPECT_EQ(nums, std::vector<int>({1, 2, 3, 4, 5}));
}

TEST_F(RemoveDuplicatesTest, SomeDuplicates) {
    std::vector<int> nums = {1, 1, 2, 2, 3, 4, 5, 5};
    int k = solution.removeDuplicates(nums);
    EXPECT_EQ(k, 5);
    EXPECT_EQ(std::vector<int>(nums.begin(), nums.begin() + k), std::vector<int>({1, 2, 3, 4, 5}));
}

TEST_F(RemoveDuplicatesTest, AllDuplicates) {
    std::vector<int> nums = {1, 1, 1, 1, 1};
    EXPECT_EQ(solution.removeDuplicates(nums), 1);
    EXPECT_EQ(nums[0], 1);
}

TEST_F(RemoveDuplicatesTest, LeetCodeExample1) {
    std::vector<int> nums = {1, 1, 2};
    int k = solution.removeDuplicates(nums);
    EXPECT_EQ(k, 2);
    EXPECT_EQ(std::vector<int>(nums.begin(), nums.begin() + k), std::vector<int>({1, 2}));
}

TEST_F(RemoveDuplicatesTest, LeetCodeExample2) {
    std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = solution.removeDuplicates(nums);
    EXPECT_EQ(k, 5);
    EXPECT_EQ(std::vector<int>(nums.begin(), nums.begin() + k), std::vector<int>({0, 1, 2, 3, 4}));
}
