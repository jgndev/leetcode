package solution

import "math"

func findMaxAverage(nums []int, k int) float64 {
	n := len(nums)
	sum := 0.0

	for i := 0; i < k; i++ {
		sum += float64(nums[i])
	}

	result := sum

	for i := k; i < n; i++ {
		sum += float64(nums[i] - nums[i-k])
		result = math.Max(result, sum)
	}

	return result / float64(k)
}
