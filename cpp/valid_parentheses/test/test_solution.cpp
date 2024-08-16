#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};


TEST_F(SolutionTest, TestCaseOne) {
    const bool result = solution.is_valid("()[]{}");
    EXPECT_TRUE(result);
}

TEST_F(SolutionTest, TestCaseTwo) {
    const bool result = solution.is_valid("([{}])");
    EXPECT_TRUE(result);
}

TEST_F(SolutionTest, TestCaseThree) {
    const bool result = solution.is_valid("([)]");
    EXPECT_FALSE(result);
}

// Additional test cases
TEST_F(SolutionTest, TestCaseFour) {
    const bool result = solution.is_valid("");
    EXPECT_TRUE(result);
}

TEST_F(SolutionTest, TestCaseFive) {
    const bool result = solution.is_valid("[");
    EXPECT_FALSE(result);
}