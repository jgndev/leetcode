package solution

func numSubarrayProductLessThanK(nums []int, k int) int {
	if k <= 1 {
		return 0
	}

	ans, left := 0, 0
	curr := 1
	n := len(nums)

	for right := 0; right < n; right++ {
		curr *= nums[right]

		for curr >= k && left <= right {
			// handle any potential divivsion by zero
			if nums[left] != 0 {
				curr /= nums[left]
			} else {
				// reset curr to 1
				curr = 1
			}

			left++
		}

		ans += right - left + 1
	}

	return ans
}
