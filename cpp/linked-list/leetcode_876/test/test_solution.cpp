#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;

  // Helper function to create a linked list from a vector
  Node *createLinkedList(const std::vector<int> &values) {
    Node dummy(0);
    Node *current = &dummy;
    for (int val : values) {
      current->next = new Node(val);
      current = current->next;
    }
    return dummy.next;
  }

  // Helper function to delete a linked list
  void deleteLinkedList(Node *head) {
    while (head) {
      Node *temp = head;
      head = head->next;
      delete temp;
    }
  }
};

TEST_F(SolutionTest, OddNumberOfNodes) {
  Node *head = createLinkedList({1, 2, 3, 4, 5});
  Node *result = solution.middle_node(head);
  EXPECT_EQ(result->val, 3);
  deleteLinkedList(head);
}

TEST_F(SolutionTest, EvenNumberOfNodes) {
  Node *head = createLinkedList({1, 2, 3, 4, 5, 6});
  Node *result = solution.middle_node(head);
  EXPECT_EQ(result->val, 4);
  deleteLinkedList(head);
}

TEST_F(SolutionTest, SingleNode) {
  Node *head = createLinkedList({1});
  Node *result = solution.middle_node(head);
  EXPECT_EQ(result->val, 1);
  deleteLinkedList(head);
}

TEST_F(SolutionTest, TwoNodes) {
  Node *head = createLinkedList({1, 2});
  Node *result = solution.middle_node(head);
  EXPECT_EQ(result->val, 2);
  deleteLinkedList(head);
}

TEST_F(SolutionTest, LongList) {
  Node *head = createLinkedList({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11});
  Node *result = solution.middle_node(head);
  EXPECT_EQ(result->val, 6);
  deleteLinkedList(head);
}
