package signOfTheProductOfAnArray

func arraySign(nums []int) int {
	if len(nums) == 0 {
		return 0
	}

	n := len(nums)
	negCount := 0

	for i := 0; i < n; i++ {
		// if any number in nums is zero, the result will always be zero
		if nums[i] == 0 {
			return 0
		}

		if nums[i] < 0 {
			negCount++
		}
	}

	if negCount%2 == 0 {
		// even numbers of negatives always produce a positive product
		return 1
	} else {
		// odd numbers of negatives always produce a negative product
		return -1
	}
}
