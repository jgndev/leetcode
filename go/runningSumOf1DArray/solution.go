package solution

func runningSum(nums []int) []int {
	n := len(nums)
	sum := 0

	for i := 0; i < n; i++ {
		sum += nums[i]
		nums[i] = sum
	}

	return nums
}
