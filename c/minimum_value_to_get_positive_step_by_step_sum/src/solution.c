#include "solution.h"

int min(int a, int b) {
  return (a < b) ? a : b;
}

int minStartValue(const int *nums, int numSize) {
  int min_val = 0;
  int total = 0;

  for (int i = 0; i < numSize; ++i) {
    total += nums[i];
    min_val = min(min_val, total);
  }

  return -min_val + 1;
}

