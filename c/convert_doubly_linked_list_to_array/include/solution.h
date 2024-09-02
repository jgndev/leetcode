#ifndef LINKED_LIST_CYCLE_LIBRARY_H
#define LINKED_LIST_CYCLE_LIBRARY_H

#include <stdbool.h>
#include <stddef.h>

struct Node {
  int val;
  struct Node *next;
  struct Node *prev;
};

#define MAX_SIZE 50

int *to_array(struct Node *head, int *return_size);

#endif // LINKED_LIST_CYCLE_LIBRARY_H
