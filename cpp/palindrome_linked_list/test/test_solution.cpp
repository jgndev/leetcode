#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;

  // helper function to create a linked list from a vector
  Node *create_linked_list(const std::vector<int> &values) {
    Node dummy(0);
    Node *curr = &dummy;

    for (int v : values) {
      curr->next = new Node(v);
      curr = curr->next;
    }

    return dummy.next;
  }

  // helper function to delete a linked list
  void delete_linked_list(Node *head) {
    while (head) {
      auto temp = head;
      head = head->next;
      delete temp;
    }
  }
};

TEST_F(SolutionTest, TestCaseOne) {
  std::vector<int> values = {1, 2, 3, 2, 1};
  auto head = create_linked_list(values);

  const bool result = solution.is_palindrome(head);
  constexpr bool expected = true;

  EXPECT_EQ(result, expected);

  delete_linked_list(head);
}

TEST_F(SolutionTest, TestCaseTwo) {
  std::vector<int> values = {1, 2, 3, 4, 5};
  auto head = create_linked_list(values);

  const bool result = solution.is_palindrome(head);
  constexpr bool expected = false;

  EXPECT_EQ(result, expected);

  delete_linked_list(head);
}

TEST_F(SolutionTest, TestCaseThree) {
  std::vector<int> values = {1};
  auto head = create_linked_list(values);

  const bool result = solution.is_palindrome(head);
  constexpr bool expected = true;
  EXPECT_EQ(result, expected);

  delete_linked_list(head);
}
