package moveZeroes

func moveZeroes(nums []int) {
	// writer pointer moves to where non-zero values are written
	writer := 0

	for reader := 0; reader < len(nums); reader++ {
		// if the value at position reader is non-zero
		if nums[reader] != 0 {
			// write the value pointed to at reader into the position
			// pointed to by writer
			nums[writer] = nums[reader]
			// increment writer
			writer++
		}
	}

	// reader has now reached the end of nums
	// fill the remaining positions with zeros
	for writer < len(nums) {
		nums[writer] = 0
		writer++
	}
}
