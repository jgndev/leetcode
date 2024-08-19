#pragma once

struct Node {
    int val;
    Node *next;

    Node(int x) : val(x), next(nullptr) {}
};

class Solution {
  public:
    Node* reverse_list(Node* head);
};