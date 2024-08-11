//
// Created by Jeremy Novak on 8/11/24.
//

#include <gtest/gtest.h>
#include "solution.h"

class PlusOneTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(PlusOneTest, SingleDigit) {
    std::vector<int> input = {0};
    std::vector<int> expected = {1};
    EXPECT_EQ(solution.plus_one(input), expected);
}

TEST_F(PlusOneTest, SingleDigitNine) {
    std::vector<int> input = {9};
    std::vector<int> expected = {1, 0};
    EXPECT_EQ(solution.plus_one(input), expected);
}

TEST_F(PlusOneTest, MultipleDigits) {
    std::vector<int> input = {1, 2, 3};
    std::vector<int> expected = {1, 2, 4};
    EXPECT_EQ(solution.plus_one(input), expected);
}

TEST_F(PlusOneTest, MultipleDigitsEndingInNine) {
    std::vector<int> input = {1, 2, 9};
    std::vector<int> expected = {1, 3, 0};
    EXPECT_EQ(solution.plus_one(input), expected);
}

TEST_F(PlusOneTest, AllNines) {
    std::vector<int> input = {9, 9, 9};
    std::vector<int> expected = {1, 0, 0, 0};
    EXPECT_EQ(solution.plus_one(input), expected);
}

TEST_F(PlusOneTest, LargeNumber) {
    std::vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 9, 0};
    EXPECT_EQ(solution.plus_one(input), expected);
}

TEST_F(PlusOneTest, LeadingZeros) {
    std::vector<int> input = {0, 0, 1};
    std::vector<int> expected = {0, 0, 2};
    EXPECT_EQ(solution.plus_one(input), expected);
}

TEST_F(PlusOneTest, MaxDigits) {
    std::vector<int> input(100, 9);  // 100 nines
    std::vector<int> expected(101, 0);
    expected[0] = 1;
    EXPECT_EQ(solution.plus_one(input), expected);
}