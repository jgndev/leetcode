#include "solution.h"

int Solution::ways_to_split_array(const std::vector<int> &nums) {
  if (nums.empty()) {
    return 0;
  }

  int count = 0;
  long long left_sum = 0;
  long long total_sum =
      std::accumulate(nums.begin(), nums.end(), 0LL);
  const size_t n = nums.size();

  for (size_t i = 0; i < n - 1; ++i) {
    left_sum += nums[i];
    long long right_sum = total_sum - left_sum;

    if (left_sum >= right_sum) {
      ++count;
    }
  }

  return count;
}
