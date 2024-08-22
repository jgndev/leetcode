//
// Created by Jeremy Novak on 8/14/24.
//
#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  std::string address = "1.1.1.1";
  const std::string expected = "1[.]1[.]1[.]1";
  const std::string result = solution.defang_ip_address(address);
  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::string address = "255.100.50.0";
  std::string expected = "255[.]100[.]50[.]0";
  const std::string result = solution.defang_ip_address(address);
  EXPECT_EQ(result, expected);
}