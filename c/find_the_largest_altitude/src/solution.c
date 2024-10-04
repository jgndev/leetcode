#include "solution.h"

int max(int a, int b) {
  if (a > b) {
    return a;
  }

  return b;
}

int largestAltitude(int *gain, int gainSize) {
  int high = 0, curr = 0;

  for (int i = 0; i < gainSize; ++i) {
    curr += gain[i];

    high = max(high, curr);
  }

  return high;
}