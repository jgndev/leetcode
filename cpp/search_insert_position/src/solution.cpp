#include "solution.h"

int Solution::search_insert(vector<int> &nums, int target) {
  int mid, lo = 0, hi = nums.size() - 1;

  while (lo <= hi) {
    mid = lo + (hi - lo) / 2;

    if (nums[mid] == target) {
      return mid;
    } else if (target < nums[mid]) {
      // target is on the left side of the vector
      hi = mid - 1;
    } else {
      // target is on the right side of the vector
      lo = mid + 1;
    }
  }

  return lo;
}
