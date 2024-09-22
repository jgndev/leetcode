#include "solution.h"

int *getAverages(int *nums, int numsSize, int k, int *returnSize) {
  if (k == 0) {
    *returnSize = numsSize;
    return nums;
  }

  int windowSize = 2 * k + 1;
  int *averages = (int *) malloc(numsSize * sizeof(int));
  *returnSize = numsSize;

  for (int i = 0; i < numsSize; ++i) {
    averages[i] = -1;
  }

  if (windowSize > numsSize) {
    return averages;
  }

  long long windowSum = 0;
  for (int i = 0; i < windowSize; ++i) {
    windowSum += nums[i];
  }

  averages[k] = (int) (windowSum / windowSize);

  for (int i = windowSize; i < numsSize; ++i) {
    windowSum = windowSum - nums[i - windowSize] + nums[i];
    averages[i - k] = (int) (windowSum / windowSize);
    averages[i] = -1;  // Set the current element to -1
  }

  return averages;
}