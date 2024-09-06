#include "solution.h"

std::vector<int> Solution::running_sum(std::vector<int> &nums) {
  int n = static_cast<int>(nums.size());
  int sum = 0;

  for (int i = 0; i < n; ++i) {
    sum += nums[i];
    nums[i] = sum;
  }

  return nums;
}
