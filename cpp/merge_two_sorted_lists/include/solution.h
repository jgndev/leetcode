#pragma once

#include <vector>

class Node {
public:
    // public for simplicity
    int val;
    // public for simplicity
    Node* next;

    Node(int val = 0, Node* next = nullptr) : val(val), next(next) {}
};

class Solution {
  public:
    Node* merge_two_lists(Node* l1, Node* l2);
};