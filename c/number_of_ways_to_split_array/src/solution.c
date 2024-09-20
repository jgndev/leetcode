#include "solution.h"

int ways_to_split_array(int *nums, int num_size) {
  if (num_size < 2) {
    return 0;
  }

  long long left_sum = 0;
  long long total_sum = 0;
  int count = 0;

  // calculate total sum
  for (int i = 0; i < num_size; ++i) {
    total_sum += nums[i];
  }

  // check each split
  for (int i = 0; i < num_size - 1; ++i) {
    left_sum += nums[i];
    const long long right_sum = total_sum - left_sum;

    if (left_sum >= right_sum) {
      ++count;
    }
  }

  return count;
}

