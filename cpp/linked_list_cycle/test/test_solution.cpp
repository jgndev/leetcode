#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;
};

TEST_F(SolutionTest, EmptyList) { EXPECT_FALSE(solution.has_cycle(nullptr)); }

TEST_F(SolutionTest, SingleNodeNoCycle) {
  Node *head = new Node(1);
  EXPECT_FALSE(solution.has_cycle(head));
  delete head;
}

TEST_F(SolutionTest, MultipleNodesNoCycle) {
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);

  EXPECT_FALSE(solution.has_cycle(head));

  // Clean up
  Node *current = head;
  while (current != nullptr) {
    Node *temp = current;
    current = current->next;
    delete temp;
  }
}

TEST_F(SolutionTest, CycleAtBeginning) {
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = head; // Create cycle

  EXPECT_TRUE(solution.has_cycle(head));

  // Clean up (be careful not to create an infinite loop)
  head->next->next->next = nullptr;
  Node *current = head;
  while (current != nullptr) {
    Node *temp = current;
    current = current->next;
    delete temp;
  }
}

TEST_F(SolutionTest, CycleInMiddle) {
  Node *head = new Node(1);
  head->next = new Node(2);
  Node *cycleStart = new Node(3);
  head->next->next = cycleStart;
  cycleStart->next = new Node(4);
  cycleStart->next->next = new Node(5);
  cycleStart->next->next->next = cycleStart; // Create cycle

  EXPECT_TRUE(solution.has_cycle(head));

  // Clean up (be careful not to create an infinite loop)
  cycleStart->next->next->next = nullptr;
  Node *current = head;
  while (current != nullptr) {
    Node *temp = current;
    current = current->next;
    delete temp;
  }
}
