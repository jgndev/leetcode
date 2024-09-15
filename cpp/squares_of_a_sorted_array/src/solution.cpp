#include "solution.h"

std::vector<int> Solution::sorted_squares(std::vector<int> &nums) {
  int n = static_cast<int>(nums.size());
  std::vector<int> result(n);

  int left = 0, right = n - 1;

  for (int i = n - 1; i >= 0; --i) {
    if (std::abs(nums[left]) > std::abs(nums[right])) {
      result[i] = nums[left] * nums[left];
      left++;
    } else {
      result[i] = nums[right] * nums[right];
      right--;
    }
  }

  return result;
}