#include <gtest/gtest.h>
#include "solution.h"

class SolutionTest : public ::testing::Test {
 protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  std::vector<int> gain = {-5, 1, 5, 0, -7};
  constexpr int expected = 1;

  const int result = solution.largestAltitude(gain);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::vector<int> gain = {-4, -3, -2, -1, 4, 3, 2};
  constexpr int expected = 0;

  const int result = solution.largestAltitude(gain);

  EXPECT_EQ(result, expected);
}