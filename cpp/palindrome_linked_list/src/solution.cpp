#include "solution.h"

bool Solution::is_palindrome(Node *head) {
  // base case - empty lists or single node lists are palindromes
  if (!head || !head->next) {
    return true;
  }

  // step 1: find the middle of the linked list.
  // we initialize fast and slow pointers that
  // start at the head node passed in.
  auto slow = head;
  auto fast = head;

  // when fast reaches the end, slow should be in the middle
  // "tortoise and hare" algorithm
  while (fast->next && fast->next->next) {
    // move slow one step
    slow = slow->next;
    // move fast two steps
    fast = fast->next->next;
  }

  // step 2: reverse the second half of the linked list
  // slow is now at the middle node
  // we start reversing from the node after slow.
  auto second_half = reverse_list(slow->next);

  // step 3: compare the first half with the second half
  auto first_half = head;

  while (second_half) {
    // if values don't match, it is not a palindrome
    if (first_half->val != second_half->val) {
      return false;
    }

    // move both pointers forward
    first_half = first_half->next;
    second_half = second_half->next;
  }

  // no differences between first and second halves, list is a palindrome
  return true;
}

// helper function to reverse a linked list
Node *Solution::reverse_list(Node *head) {
  // initial pointers for reversing the list
  Node *prev = nullptr;
  auto curr = head;

  while (curr) {
    // store the next node
    auto next_temp = curr->next;
    // reverse the link, point curr->next to prev
    curr->next = prev;
    // move prev and curr one step forward
    prev = curr;
    curr = next_temp;
  }

  // prev is now the head of the reversed list
  return prev;
}
