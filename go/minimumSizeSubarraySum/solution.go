package solution

import "math"

func minValue(a, b int) int {
	if a < b {
		return a
	}

	return b
}

func minSubarrayLen(target int, nums []int) int {
	left, right, sum := 0, 0, 0
	result := math.MaxInt
	n := len(nums)

	for right = 0; right < n; right++ {
		sum += nums[right]

		for sum >= target {
			result = minValue(result, right-left+1)
			sum -= nums[left]
			left++
		}
	}

	if result == math.MaxInt {
		return 0
	}

	return result
}
