#include "solution.h"

bool has_cycle(struct Node *head) {
  if (head == NULL || head->next == NULL) {
    return false;
  }

  struct Node *slow = head;
  struct Node *fast = head->next;

  while (fast != NULL && fast->next != NULL) {
    if (slow == fast) {
      // cycle detected
      return true;
    }

    slow = slow->next;
    fast = fast->next->next;
  }

  // no cycle found
  return false;
}

