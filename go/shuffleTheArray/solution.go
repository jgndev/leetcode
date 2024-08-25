package solution

func shuffle(nums []int, n int) []int {
	result := make([]int, n*2)

	// loop weaving elements from the x and y side
	// of nums placing them as x,y,x,y,x,y...
	for i := 0; i < n; i++ {
		// place the element from the x side of nums
		result[2*i] = nums[i]
		// place the element from the y side of nums
		result[2*i+1] = nums[n+i]
	}

	return result
}
