package solution

import "slices"

func intersection(nums [][]int) []int {
	// create a map to count occurrences of each number
	counts := make(map[int]int)

	// iterate through each array in nums
	for _, n := range nums {
		// increment the count for each number in the sub-slice
		for _, v := range n {
			counts[v]++
		}
	}

	// store the number of input slices
	n := len(nums)

	// slice to store the numbers that appear in all slices
	answer := []int{}

	// iterate through the counts map
	for k, v := range counts {
		// if a number appears in all slices (count equals n)
		if v == n {
			// add it to the answer slice
			answer = append(answer, k)
		}
	}

	// sort the answser slice in ascending order
	slices.Sort(answer)

	// return the answer slice
	return answer
}
