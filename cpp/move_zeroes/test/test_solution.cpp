// created by Jeremy Novak on 8/11/24

#include <gtest/gtest.h>
#include "solution.h"

class MoveZeroesTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(MoveZeroesTest, EmptyVector) {
    std::vector<int> nums = {};
    solution.move_zeroes(nums);
    EXPECT_TRUE(nums.empty());
}

TEST_F(MoveZeroesTest, NoZeroes) {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::vector<int> expected = {1, 2, 3, 4, 5};
    solution.move_zeroes(nums);
    EXPECT_EQ(nums, expected);
}

TEST_F(MoveZeroesTest, AllZeroes) {
    std::vector<int> nums = {0, 0, 0, 0, 0};
    std::vector<int> expected = {0, 0, 0, 0, 0};
    solution.move_zeroes(nums);
    EXPECT_EQ(nums, expected);
}

TEST_F(MoveZeroesTest, MixedValues) {
    std::vector<int> nums = {0, 1, 0, 3, 12};
    std::vector<int> expected = {1, 3, 12, 0, 0};
    solution.move_zeroes(nums);
    EXPECT_EQ(nums, expected);
}

TEST_F(MoveZeroesTest, ZeroesAtEnd) {
    std::vector<int> nums = {1, 2, 3, 0, 0};
    std::vector<int> expected = {1, 2, 3, 0, 0};
    solution.move_zeroes(nums);
    EXPECT_EQ(nums, expected);
}

TEST_F(MoveZeroesTest, SingleElement) {
    std::vector<int> nums = {0};
    std::vector<int> expected = {0};
    solution.move_zeroes(nums);
    EXPECT_EQ(nums, expected);
}

TEST_F(MoveZeroesTest, AlternatingZeroes) {
    std::vector<int> nums = {1, 0, 2, 0, 3, 0};
    std::vector<int> expected = {1, 2, 3, 0, 0, 0};
    solution.move_zeroes(nums);
    EXPECT_EQ(nums, expected);
}

TEST_F(MoveZeroesTest, LargeVector) {
    std::vector<int> nums(1000, 0);
    nums[0] = 1; nums[999] = 2;
    std::vector<int> expected = {1, 2};
    expected.resize(1000, 0);
    solution.move_zeroes(nums);
    EXPECT_EQ(nums, expected);
}

// Additional test to ensure order is preserved
TEST_F(MoveZeroesTest, PreservesOrder) {
    std::vector<int> nums = {0, 5, 0, 3, 12, 0};
    std::vector<int> expected = {5, 3, 12, 0, 0, 0};
    solution.move_zeroes(nums);
    EXPECT_EQ(nums, expected);
}