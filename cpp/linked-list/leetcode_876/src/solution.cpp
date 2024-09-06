#include "solution.h"

Node *Solution::middle_node(Node *head) {
  auto slow = head;
  auto fast = head;

  while (fast != nullptr && fast->next != nullptr) {
    // move slow one step forward
    slow = slow->next;
    // move fast one step forward
    fast = fast->next->next;
  }

  // slow is at the middle of the list
  return slow;
}
