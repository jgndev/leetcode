#include "solution.h"

int *to_array(struct Node *head, int *return_size) {
  static int nums[MAX_SIZE];
  int i = 0;
  struct Node *curr = head;

  while (curr != NULL && i < MAX_SIZE) {
    nums[i++] = curr->val;
    curr = curr->next;
  }

  *return_size = i;

  return nums;
}
