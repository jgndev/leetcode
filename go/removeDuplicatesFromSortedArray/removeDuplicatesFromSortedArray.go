package removeDuplicatesFromSortedArray

func removeDuplicatesFromSortedArray(nums []int) int {
	// return 0 if nums is empty
	if len(nums) == 0 {
		return 0
	}

	// initialize a pointer k in the next position an element
	// could be placed in the sorted array
	k := 1

	// iterate over the nums array checking if the current value
	// pointed to at i is different from the previous value pointed
	// to at i - 1
	for i := 1; i < len(nums); i++ {
		// if the values at position i and i - 1 are different
		if nums[i] != nums[i-1] {
			// put the value pointed to in i at position k
			nums[k] = nums[i]
			// increment k
			k++
		}
	}

	return k
}
