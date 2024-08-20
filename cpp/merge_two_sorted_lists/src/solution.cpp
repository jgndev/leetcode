#include "solution.h"

Node* Solution::merge_two_lists(Node* l1, Node* l2) {
    // handle cases where either l1 or l2 are null at the start
    if (l1 == nullptr) {
        return l2;
    }

    if (l2 == nullptr) {
        return l1;
    }

    // create a dummy node to simplify the linked list
    Node dummy(-1);
    Node* tail = &dummy;

    while (l1 != nullptr && l2 != nullptr) {
       if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
       } else {
           tail->next = l2;
           l2 = l2->next;
       }

        tail = tail->next;
    }

    if (l1 != nullptr) {
        // handle case where l1 still has nodes, append them to tail
        tail->next = l1;
    } else if (l2 != nullptr) {
        // handle case where l2 still has nodes, append them to tail
        tail->next = l2;
    }

    return dummy.next;
}