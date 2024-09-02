#pragma once

#include <vector>

class Node {
public:
  int val;
  Node *next;
  Node *prev;

  Node(int v) : val(v), next(nullptr), prev(nullptr) {}
};

class Solution {
public:
  std::vector<int> to_array(Node *head);
};
