#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  const std::string input = "Let's take LeetCode contest";
  const std::string expected = "s'teL ekat edoCteeL tsetnoc";

  const std::string result = solution.reverseWords(input);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  const std::string input = "Mr Ding";
  const std::string expected = "rM gniD";

  const std::string result = solution.reverseWords(input);

  EXPECT_EQ(result, expected);
}