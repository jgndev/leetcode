#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    vector<int> input = {1, 1, 2, 2, 2, 3};
    const vector<int> expected = {3, 1, 1, 2, 2, 2};
    const vector<int> result = solution.frequency_sort(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    vector<int> input = {2, 3, 1, 3, 2};
    const vector<int> expected = {1, 3, 3, 2, 2};
    const vector<int> result = solution.frequency_sort(input);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    vector<int> input = {-1, 1, -6, 4, 5, -6, 1, 4, 1};
    const vector<int> expected = {5, -1, 4, 4, -6, -6, 1, 1, 1};
    const vector<int> result = solution.frequency_sort(input);
    EXPECT_EQ(result, expected);
}
