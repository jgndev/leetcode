#include "solution.h"

void reverse_string(char *s, const int size) {
  int left = 0;
  int right = size - 1;

  while (left < right) {
    const char temp = s[left];
    s[left] = s[right];
    s[right] = temp;

    ++left;
    --right;
  }
}

