//
// Created by Jeremy Novak on 8/13/24.
//

#include <gtest/gtest.h>
#include "solution.h"

class RomanIntTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(RomanIntTest, TestCaseOne) {
    const std::string s = "III";
    const int result = solution.roman_int(s);
    constexpr int expected = 3;
    EXPECT_EQ(result, expected);
}

TEST_F(RomanIntTest, TestCaseTwo) {
    const std::string s = "MCMXCIV";
    const int result = solution.roman_int(s);
    constexpr int expected = 1994;
    EXPECT_EQ(result, expected);
}

TEST_F(RomanIntTest, TestCaseThree) {
    const std::string s = "MMMCMXCIX";
    const int result = solution.roman_int(s);
    constexpr int expected = 3999;
    EXPECT_EQ(result, expected);
}

TEST_F(RomanIntTest, TestCaseFour) {
    const std::string s = "V";
    const int result = solution.roman_int(s);
    constexpr int expected = 5;
    EXPECT_EQ(result, expected);
}

TEST_F(RomanIntTest, TestCaseSix) {
    const std::string s = "LVIII";
    const int result = solution.roman_int(s);
    constexpr int expected = 58;
    EXPECT_EQ(result, expected);
}
