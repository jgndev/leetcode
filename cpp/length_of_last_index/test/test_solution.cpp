//
// Created by Jeremy Novak on 8/13/24.
//

//
// Created by Jeremy Novak on 8/13/24.
//

#include <gtest/gtest.h>
#include "solution.h"

class LengthOfLastStringTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(LengthOfLastStringTest, TestCaseOne) {
    const std::string s = "  fly me to the moon  ";
    const int result = solution.length_of_last_index(s);
    constexpr int expected = 4;
    EXPECT_EQ(result, expected);
}

TEST_F(LengthOfLastStringTest, TestCaseTwo) {
    const std::string s = "Hello World";
    const int result = solution.length_of_last_index(s);
    constexpr int expected = 5;
    EXPECT_EQ(result, expected);
}

TEST_F(LengthOfLastStringTest, TestCaseThree) {
    const std::string s = "  wood chuck would chuck wood   ";
    const int result = solution.length_of_last_index(s);
    constexpr int expected = 4;
    EXPECT_EQ(result, expected);
}
