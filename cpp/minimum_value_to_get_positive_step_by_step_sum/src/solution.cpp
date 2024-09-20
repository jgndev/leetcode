#include "solution.h"

int Solution::minStartValue(const std::vector<int> &nums) {
  int min_val = 0;
  int total = 0;

  for (const auto &num : nums) {
    total += num;
    min_val = std::min(min_val, total);
  }

  return -min_val + 1;
}
