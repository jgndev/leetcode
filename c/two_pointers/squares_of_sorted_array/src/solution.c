#include "solution.h"

int *sorted_squares(const int *nums, const int num_size, int return_size) {
  int *result = (int *)malloc(num_size * sizeof(int));
  return_size = num_size;

  int left = 0, right = num_size - 1;

  for (int i = num_size - 1; i >= 0; i--) {
    if (abs(nums[left]) > abs(nums[right])) {
      result[i] = nums[left] * nums[left];
      left++;
    } else {
      result[i] = nums[right] * nums[right];
      right--;
    }
  }

  return result;
}

int abs(int x) { return x < 0 ? -x : x; }
