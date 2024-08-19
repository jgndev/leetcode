#include "solution.h"

Node* createNode(int val) {
    return new Node(val);
}


Node* Solution::reverse_list(Node* head) {
    Node* prev = nullptr;
    Node* curr  = head;

    while (curr != nullptr) {
        Node* tmp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmp;
    }

    return prev;
}