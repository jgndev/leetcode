#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;

  // Helper function to create a linked list from a vector
  Node *createList(const std::vector<int> &values) {
    Node dummy(0);
    Node *current = &dummy;
    for (int val : values) {
      current->next = new Node(val);
      current = current->next;
    }
    return dummy.next;
  }

  // Helper function to compare a linked list with a vector
  bool compareListWithVector(Node *head, const std::vector<int> &expected) {
    for (int val : expected) {
      if (!head || head->val != val)
        return false;
      head = head->next;
    }
    return !head; // Should be null at the end
  }

  // Helper function to delete a linked list
  void deleteList(Node *head) {
    while (head) {
      Node *temp = head;
      head = head->next;
      delete temp;
    }
  }
};

TEST_F(SolutionTest, TestCaseOne) {
  Node *head = createList({1, 1, 2, 3, 3});
  Node *result = solution.remove_duplicates(head);

  EXPECT_TRUE(compareListWithVector(result, {1, 2, 3}));

  deleteList(result);
}

TEST_F(SolutionTest, TestCaseTwo) {
  Node *head = createList({1, 1, 1, 1, 1});
  Node *result = solution.remove_duplicates(head);

  EXPECT_TRUE(compareListWithVector(result, {1}));

  deleteList(result);
}

TEST_F(SolutionTest, TestCaseThree) {
  Node *head = createList({1, 2, 3, 4, 5});
  Node *result = solution.remove_duplicates(head);

  EXPECT_TRUE(compareListWithVector(result, {1, 2, 3, 4, 5}));

  deleteList(result);
}
