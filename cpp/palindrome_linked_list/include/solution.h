#pragma once

class Node {
public:
  int val;
  Node *next;

  Node(int v) : val(v), next(nullptr) {}
};

class Solution {
public:
  bool is_palindrome(Node *head);

private:
  Node *reverse_list(Node *head);
};
