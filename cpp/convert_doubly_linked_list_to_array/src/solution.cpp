#include "solution.h"

std::vector<int> Solution::to_array(Node *head) {
  auto curr = head;

  std::vector<int> nums;

  while (curr) {
    nums.emplace_back(curr->val);

    curr = curr->next;
  }

  return nums;
}
