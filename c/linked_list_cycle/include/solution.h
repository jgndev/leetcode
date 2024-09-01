#ifndef LINKED_LIST_CYCLE_LIBRARY_H
#define LINKED_LIST_CYCLE_LIBRARY_H

#include <stdbool.h>
#include <stddef.h>

struct Node {
  int val;
  struct Node *next;
};

bool has_cycle(struct Node *head);

#endif //LINKED_LIST_CYCLE_LIBRARY_H
