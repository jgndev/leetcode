#include "solution.h"

int Solution::longest_ones(const std::vector<int> &nums, int k) {
  // initialize two pointers for the sliding window
  int left = 0, right = 0;
  // get the size of the input
  const int n = static_cast<int>(nums.size());

  // iterate through the array with the right pointer
  for (right = 0; right < n; ++right) {
    // k represents the number of flips (0 to 1) we can make.
    // if the current element is 0, we need to use a flip, so decrease k
    if (nums[right] == 0) {
      --k;
    }

    // if k becomes negative, it means we've used more flips than allowed
    if (k < 0) {
      // to maintain the valid window, we need to move the left pointer.
      // if the element at left was 0, we regain a flip (increase k).
      // if it was 1, k doesn't change.
      // this is done using the expression: 1 - nums[left].
      // for 0: 1 - 0 = 1 (regain a flip)
      // for 1: 1 - 1 = 0 (no change in k)
      k += 1 - nums[left];

      // move the left pointer to shrink the window
      ++left;
    }
  }

  // length of the longest subarray is the distance between left and right
  return right - left;
}
