#include "solution.h"

std::string Solution::winner_of_game(Node *head) {
  // set even as the head node
  auto even = head;
  // initialize trackers for even and odd points
  int even_points = 0, odd_points = 0;

  // traverse the linked list
  while (even != nullptr) {
    // initialize odd as next
    auto odd = even->next;

    // if even's value is greater than odd's value
    if (even->val > odd->val) {
      // increment even point tracker
      ++even_points;
    } else {
      ++odd_points;
    }

    // update even to odd's next
    even = odd->next;
  }

  // determine the winner
  if (even_points == odd_points) {
    return "Tie";
  } else if (even_points > odd_points) {
    return "Even";
  } else {
    return "Odd";
  }
}
