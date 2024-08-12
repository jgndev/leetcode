//
// Created by Jeremy Novak on 8/12/24.
//

#include <gtest/gtest.h>
#include "solution.h"

class SignOfProductTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SignOfProductTest, Example1) {
    std::vector<int> nums = {-1, -2, -3, -4, 3, 2, 1};
    EXPECT_EQ(solution.array_sign(nums), 1);
}

TEST_F(SignOfProductTest, Example2) {
    std::vector<int> nums = {1, 5, 0, 2, -3};
    EXPECT_EQ(solution.array_sign(nums), 0);
}

TEST_F(SignOfProductTest, Example3) {
    std::vector<int> nums = {-1, 1, -1, 1, -1};
    EXPECT_EQ(solution.array_sign(nums), -1);
}

TEST_F(SignOfProductTest, AllPositive) {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    EXPECT_EQ(solution.array_sign(nums), 1);
}

TEST_F(SignOfProductTest, AllNegative) {
    std::vector<int> nums = {-1, -2, -3, -4, -5};
    EXPECT_EQ(solution.array_sign(nums), -1);
}

TEST_F(SignOfProductTest, SingleZero) {
    std::vector<int> nums = {0};
    EXPECT_EQ(solution.array_sign(nums), 0);
}

TEST_F(SignOfProductTest, SinglePositive) {
    std::vector<int> nums = {42};
    EXPECT_EQ(solution.array_sign(nums), 1);
}

TEST_F(SignOfProductTest, SingleNegative) {
    std::vector<int> nums = {-42};
    EXPECT_EQ(solution.array_sign(nums), -1);
}

TEST_F(SignOfProductTest, EmptyArray) {
    std::vector<int> nums = {};
    EXPECT_EQ(solution.array_sign(nums), 0);  // Assuming empty array returns 0
}

TEST_F(SignOfProductTest, MixedWithZero) {
    std::vector<int> nums = {-1, 1, 0, 1, -1};
    EXPECT_EQ(solution.array_sign(nums), 0);
}

TEST_F(SignOfProductTest, LargeArray) {
    std::vector<int> nums(1000, 1);
    nums[500] = -1;
    EXPECT_EQ(solution.array_sign(nums), -1);
}

TEST_F(SignOfProductTest, AlternatingSignsEven) {
    std::vector<int> nums = {1, -1, 1, -1, 1, -1};
    EXPECT_EQ(solution.array_sign(nums), -1);
}

TEST_F(SignOfProductTest, AlternatingSignsOdd) {
    std::vector<int> nums = {1, -1, 1, -1, 1};
    EXPECT_EQ(solution.array_sign(nums), 1);
}