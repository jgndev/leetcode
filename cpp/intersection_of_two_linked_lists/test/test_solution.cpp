#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
  Solution solution;

  Node *create_list(const std::vector<int> &values) {
    Node dummy(0);
    auto curr = &dummy;

    for (int val : values) {
      curr->next = new Node(val);
      curr = curr->next;
    }

    return dummy.next;
  }

  void delete_list(Node *head) {
    while (head) {
      auto temp = head;
      head = head->next;
      delete temp;
    }
  }
};

TEST_F(SolutionTest, TestCaseOne) {
  Node *common = create_list({1, 2, 3});
  Node *headA = common;
  Node *headB = common;

  EXPECT_EQ(solution.get_intersection_node(headA, headB), common);

  delete_list(common);
}
