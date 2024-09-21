#include "solution.h"


std::vector<int> Solution::getAverages(std::vector<int>& nums, int k) {
  // If k is 0, no averaging is needed, return the original vector.
  if (k == 0) {
    return nums;
  }

  // Calculate the total window size.
  // k elements on each side + the center element.
  const size_t windowSize = 2 * k + 1;
  // Get a const to the size of the nums vector to limit calls to .size().
  const size_t n = nums.size();
  // Instantiate a new vector for storing the averages.
  std::vector<int> averages(n, -1);

  // If the window size is larger than the array, no averages can be calculated.
  if (windowSize > n) {
    return averages;
  }

  // Use int64_t to prevent integer overflow when summing below.
  int64_t windowSum = 0;

  // Calculate the sum of the first window.
  for (size_t i = 0; i < windowSize; ++i) {
    windowSum += nums[i];
  }

  // Calculate and store the average for the first window centered at index k.
  averages[k] = static_cast<int>(windowSum / windowSize);

  // Slide the window and calculate averages for subsequent positions.
  for (size_t i = windowSize; i < n; ++i) {
    // Update window sum:
    // - Subtract the element leaving the window (nums[i - windowSize).
    // - Add the new element entering the window (nums[i]).
    windowSum = windowSum - nums[i - windowSize] + nums[i];

    // Calculate and store the average.
    // The center of the current window is at i - k.
    averages[i - k] = static_cast<int>(windowSum / windowSize);
  }

  // return the averages vector.
  return averages;
}
