#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    std::vector<char> input = {'h', 'e', 'l', 'l', 'o'};
    const std::vector<char> expected = {'o', 'l', 'l', 'e', 'h'};
    solution.reverse_string(input);
    EXPECT_EQ(input, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    std::vector<char> input = {'c', 'a', 't'};
    const std::vector<char> expected = {'t', 'a', 'c'};
    solution.reverse_string(input);
    EXPECT_EQ(input, expected);
}
