#pragma once

#include <vector>

class Node {
public:
    // member variables
    int val;
    Node* next;

    // constructors
    // Node() : val(0), next(nullptr) {}
    // Node(int x) : val(x), next(nullptr) {}
    Node(int x = 0, Node* next = nullptr) : val(x), next(next) {}
};

class Solution {
  public:
    Node* frequencies_of_elements(Node* head);
};