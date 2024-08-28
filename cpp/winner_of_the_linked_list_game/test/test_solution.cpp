#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, TestCaseOne) {
  Node head(2);
  Node tail(1);

  head.next = &tail;

  const std::string expected = "Even";
  const std::string result = solution.winner_of_game(&head);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseTwo) {
  Node head(2);
  Node a(5);
  Node b(4);
  Node c(7);
  Node d(20);
  Node e(5);

  head.next = &a;
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;

  const std::string expected = "Odd";
  const std::string result = solution.winner_of_game(&head);

  EXPECT_EQ(result, expected);
}

TEST_F(SolutionTest, TestCaseThree) {
  Node head(4);
  Node a(5);
  Node b(2);
  Node c(1);

  head.next = &a;
  a.next = &b;
  b.next = &c;

  const std::string expected = "Tie";
  const std::string result = solution.winner_of_game(&head);

  EXPECT_EQ(result, expected);
}
