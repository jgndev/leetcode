package removeElement

func removeElement(nums []int, val int) int {
	writer := 0

	for reader := 0; reader < len(nums); reader++ {
		if nums[reader] != val {
			nums[writer] = nums[reader]
			writer++
		}
	}

	return writer
}
