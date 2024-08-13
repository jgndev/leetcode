package monotonicArray

func isMonotonic(nums []int) bool {
	n := len(nums)

	increasing := true
	decreasing := true

	for i := 1; i < n; i++ {
		// if this number is greater then the previous number
		if nums[i] > nums[i-1] {
			decreasing = false
		}

		// if this number is smaller than the previous number
		if nums[i] < nums[i-1] {
			increasing = false
		}

		// if both increasing and decreasing are false
		if !increasing && !decreasing {
			return false
		}
	}

	return true
}
