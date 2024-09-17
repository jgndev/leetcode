#include "solution.h"

double Solution::find_max_average(const std::vector<int> &nums, const int k) {
  const int n = static_cast<int>(nums.size());
  double sum = 0.0;

  for (int i = 0; i < k; i++) {
    sum += nums[i];
  }

  double result = sum;

  for (int i = k; i < n; ++i) {
    sum += nums[i] - nums[i - k];
    result = std::max(result, sum);
  }

  return result / k;
}