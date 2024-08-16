package solution

// can just append nums onto nums in Go
// func getConcatenation(nums []int) []int {
//     return append(nums, nums...)
// }

func getConcatenation(nums []int) []int {
	n := len(nums)
	answer := make([]int, 2*n, 2*n)

	for i := 0; i < n; i++ {
		answer[i] = nums[i]
		answer[i+n] = nums[i]
	}

	return answer
}
