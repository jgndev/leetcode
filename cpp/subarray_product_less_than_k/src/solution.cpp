#include "solution.h"

int Solution::num_subarray_product_less_than_k(const std::vector<int> &nums, const int k) {
  if (k <= 1) {
    return 0;
  }

  int ans = 0, left = 0, curr = 1;
  const int n = static_cast<int>(nums.size());

  for (int right = 0; right < n; ++right) {
    curr *= nums[right];

    while (curr >= k && left <= right) {
      if (nums[left] != 0) {
        curr /= nums[left];
      } else {
        curr = 1;
      }

      ++left;
    }

    ans += right - left + 1;
  }

  return ans;
}