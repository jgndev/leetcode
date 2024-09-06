#include "solution.h"

Node *Solution::get_intersection_node(Node *headA, Node *headB) {
  if (!headA || !headB) {
    return nullptr;
  }

  auto pa = headA, pb = headB;

  while (pa != pb) {
    pa = pa ? pa->next : headB;
    pb = pb ? pb->next : headA;
  }

  return pa;
}
