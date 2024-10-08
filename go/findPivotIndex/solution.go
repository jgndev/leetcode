package solution

func pivotIndex(nums []int) int {
	// calculate the sum of all elements in nums
	sum := 0
	for _, num := range nums {
		sum += num
	}

	// leftSum helps keep track of the sum on the left side of the slice
	leftSum := 0

	// get the length of nums once
	n := len(nums)

	for i := 0; i < n; i++ {
		// rightSum calculated by subtracting leftSum and nums[i] from sum
		// nums: [1, 7, 3, 6, 5, 6]
		// sum: 28
		// first pass: 28 - 0 - 1 = 27
		// second pass: 28 - 1 - 7 = 20
		// third pass: 28 - 8 - 3 = 17
		// fourth pass: 28 - 11 - 6 = 11
		rightSum := sum - leftSum - nums[i]

		// if leftSum and rightSum are equal, we have found the pivot index
		// nums: [1, 7, 3, 6, 5, 6]
		// sum: 28
		// first pass: 0
		// second pass: 1
		// third pass: 8
		// fourth pass: 11
		if leftSum == rightSum {
			return i
		}

		// add the current value to leftSum for comparison
		leftSum += nums[i]
	}

	// did not find the pivot index
	return -1
}
