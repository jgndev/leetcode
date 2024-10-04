#include "solution.h"

int Solution::largestAltitude(std::vector<int> &gain) {
  int n = static_cast<int>(gain.size());
  int high = 0, curr = 0;

  for (int i = 0; i < n; ++i) {
    curr += gain[i];

    high = std::max(high, curr);
  }

  return high;
}