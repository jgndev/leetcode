#include "solution.h"

int pivotIndex(int *nums, int numsSize) {
  int sum = 0, left_sum = 0;

  // calculate the total sum of numbers in nums
  for (int i = 0; i < numsSize; ++i) {
    sum += nums[i];
  }

  for (int i = 0; i < numsSize; ++i) {
    // right_sum calculated by subtracting let_sum and nums[i] from sum
    // nums: [1, 7, 3, 6, 5, 6]
    // sum: 28
    // first pass: 28 - 0 - 1 = 27
    // second pass: 28 - 1 - 7 = 20
    // third pass: 28 - 8 - 3 = 17
    // fourth pass: 28 - 11- 6 = 11
    int right_sum = sum - left_sum - nums[i];

    // nums: [1, 7, 3, 6, 5, 6]
    // sum: 28
    // first pass: 0
    // second pass: 1
    // third pass: 8
    // fourth pass: 11
    if (left_sum == right_sum) {
      // using the example from the comments we are returning index 3 here
      return i;
    }

    left_sum += nums[i];
  }

  // did not find a pivot index, return -1
  return -1;
}