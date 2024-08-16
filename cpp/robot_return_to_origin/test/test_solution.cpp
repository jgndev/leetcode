#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
    const std::string moves = "UD";
    constexpr bool expected = true;
    const bool result = solution.jump_circle(moves);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
    const std::string moves = "LL";
    constexpr bool expected = false;
    const bool result = solution.jump_circle(moves);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
    const std::string moves = "RR";
    constexpr bool expected = false;
    const bool result = solution.jump_circle(moves);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFour) {
    const std::string moves = "UDLR";
    constexpr bool expected = true;
    const bool result = solution.jump_circle(moves);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseFive) {
    const std::string moves = "UULDDR";
    constexpr bool expected = true;
    const bool result = solution.jump_circle(moves);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSix) {
    const std::string moves = "DDDRRUUULL";
    constexpr bool expected = true;
    const bool result = solution.jump_circle(moves);
    EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseSeven) {
    const std::string moves = "RRDDLLUUU";
    constexpr bool expected = false;
    const bool result = solution.jump_circle(moves);
    EXPECT_EQ(result, expected);
}
