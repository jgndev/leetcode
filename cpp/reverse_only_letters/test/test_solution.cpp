#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  const std::string input = "Test1ng-Leet=code-Q!";
  const std::string expected = "Qedo1ct-eeLg=ntse-T!";

  const std::string result = solution.reverseOnlyLetters(input);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  const std::string input = "ab-cd";
  const std::string expected = "dc-ba";

  const std::string result = solution.reverseOnlyLetters(input);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  const std::string input = "a-bC-dEf-ghIj";
  const std::string expected = "j-Ih-gfE-dCba";

  const std::string result = solution.reverseOnlyLetters(input);

  EXPECT_EQ(result, expected);
}
