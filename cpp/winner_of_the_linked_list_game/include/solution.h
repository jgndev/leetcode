#pragma once

#include <string>

class Node {
public:
  int val;
  Node *next;

  Node(int v) {
    val = v;
    next = nullptr;
  }
};

class Solution {
public:
  std::string winner_of_game(Node *head);
};
