#include "solution.h"

int minValue(int a, int b) {
  return (a <= b) ? a : b;
}

int minSubArrayLen(int target, int *nums, int numsSize) {
  int left = 0, right = 0, sum = 0;
  int result = INT_MAX;

  for (right = 0; right < numsSize; ++right) {
    sum += nums[right];

    while (sum >= target) {
      result = minValue(result, right - left + 1);
      sum -= nums[left];
      ++left;
    }
  }

  return result == INT_MAX ? 0 : result;
}

