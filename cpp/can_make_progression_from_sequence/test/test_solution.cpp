//
// Created by Jeremy Novak on 8/12/24.
//

#include <gtest/gtest.h>
#include "solution.h"

class ArithmeticProgressionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(ArithmeticProgressionTest, ValidProgression) {
    std::vector<int> nums = {3, 5, 1};
    EXPECT_TRUE(solution.can_make_progression(nums));
}

TEST_F(ArithmeticProgressionTest, InvalidProgression) {
    std::vector<int> nums = {1, 2, 4};
    EXPECT_FALSE(solution.can_make_progression(nums));
}

TEST_F(ArithmeticProgressionTest, TwoElements) {
    std::vector<int> nums = {1, 2};
    EXPECT_TRUE(solution.can_make_progression(nums));
}

TEST_F(ArithmeticProgressionTest, SingleElement) {
    std::vector<int> nums = {1};
    EXPECT_FALSE(solution.can_make_progression(nums));
}

TEST_F(ArithmeticProgressionTest, LongerValidSequence) {
    std::vector<int> nums = {1, 5, 3, 7};
    EXPECT_TRUE(solution.can_make_progression(nums));
}

TEST_F(ArithmeticProgressionTest, NegativeNumbers) {
    std::vector<int> nums = {-3, -1, 1, 3, 5};
    EXPECT_TRUE(solution.can_make_progression(nums));
}

TEST_F(ArithmeticProgressionTest, AllSameNumbers) {
    std::vector<int> nums = {4, 4, 4, 4};
    EXPECT_TRUE(solution.can_make_progression(nums));
}

TEST_F(ArithmeticProgressionTest, LargeNumbers) {
    std::vector<int> nums = {1000000, 2000000, 3000000};
    EXPECT_TRUE(solution.can_make_progression(nums));
}

TEST_F(ArithmeticProgressionTest, EmptyVector) {
    std::vector<int> nums = {};
    EXPECT_FALSE(solution.can_make_progression(nums));
}