package solution

func sum(nums []int) int {
	result := 0

	for _, num := range nums {
		result += num
	}

	return result
}

func waysToSplitArray(nums []int) int {
	count, left, right := 0, 0, sum(nums)
	n := len(nums)

	for i := 0; i < n-1; i++ {
		left += nums[i]
		right -= nums[i]

		if left >= right {
			count++
		}
	}

	return count
}
