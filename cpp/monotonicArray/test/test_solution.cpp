//
// Created by Jeremy Novak on 8/13/24.
//

#include <gtest/gtest.h>
#include "solution.h"

class MonotonicTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(MonotonicTest, TestCaseOne) {
    std::vector<int> nums = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    bool expected = true;
    const bool result = solution.is_monotonic(nums);
    EXPECT_TRUE(result);
}

TEST_F(MonotonicTest, TestCaseTwo) {
    std::vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool expected = true;
    const bool result = solution.is_monotonic(nums);
    EXPECT_TRUE(result);
}

TEST_F(MonotonicTest, TestCaseThree) {
    std::vector<int> nums = {1, 3, 2, 5, 4, 7, 6};
    bool expected = false;
    const bool result = solution.is_monotonic(nums);
    EXPECT_FALSE(result);
}

TEST_F(MonotonicTest, TestCaseFour) {
    std::vector<int> nums = {1, 2, 3, 4, 6, 5, 7, 8, 9};
    bool expected = false;
    const bool result = solution.is_monotonic(nums);
    EXPECT_FALSE(result);
}

TEST_F(MonotonicTest, TestCaseFive) {
    std::vector<int> nums = {1};
    bool expected = true;
    const bool result = solution.is_monotonic(nums);
    EXPECT_TRUE(result);
}
