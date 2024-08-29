#include "solution.h"

Node *Solution::remove_duplicates(Node *head) {
  auto curr = head;

  while (curr != nullptr && curr->next != nullptr) {
    if (curr->next->val == curr->val) {
      // curr and curr's next have the same value, skip this node
      // by updating curr's next to the node after curr->next
      curr->next = curr->next->next;
    } else {
      // the values are different, we can keep iterating
      // through the list by updating curr's next
      curr = curr->next;
    }
  }

  return head;
}
