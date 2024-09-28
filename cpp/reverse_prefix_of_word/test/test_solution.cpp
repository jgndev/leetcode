#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  const std::string word = "abcdefd";
  const char ch = 'd';
  const std::string expected = "dcbaefd";

  const std::string result = solution.reversePrefix(word, ch);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  const std::string word = "xyxzxe";
  const char ch = 'z';
  const std::string expected = "zxyxxe";

  const std::string result = solution.reversePrefix(word, ch);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  const std::string word = "abcd";
  const char ch = 'z';
  const std::string expected = "abcd";

  const std::string result = solution.reversePrefix(word, ch);
  EXPECT_EQ(result, expected);
}
