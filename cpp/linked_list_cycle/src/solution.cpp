#include "solution.h"

bool Solution::has_cycle(Node *head) {
  // empty lists and lists with one node cannot have a cycle
  if (head == nullptr || head->next == nullptr) {
    return false;
  }

  // initialize two pointers, slow and fast.
  // 'slow' moves one step at a time.
  // 'fast' moves two steps at a time.
  auto slow = head;
  // 'fast' starts on the next node, one step ahead.
  auto fast = head->next;

  // if there *is no cycle*, 'fast' will reach the end of the list.
  // if there *is a cycle*, 'fast' will catch up to 'slow'.

  // continue until 'fast' reaches the end of the list
  while (fast != nullptr && fast->next != nullptr) {
    // if 'slow' and 'fast' meet at any node, there is a cycle.
    if (slow == fast) {
      // cycle detected
      return true;
    }

    // move 'slow' forward one step
    slow = slow->next;
    // move 'fast' forward two steps
    fast = fast->next->next;
  }

  // base case, no cycle found
  return false;
}
