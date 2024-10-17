package solution

func subarraySum(nums []int, k int) int {
	// count: track subarrays wth sum k
	// sum: track cumulative sum
	count, sum := 0, 0

	// create a map to store frequency of cumulative sums
	m := make(map[int]int)
	// initialize first element to handle cases where the entire subarray sums to k
	m[0] = 1

	for _, num := range nums {
		// update the cumulative sum
		sum += num

		// check if there is a previous sum that when subtracted from the current
		// sum is equal to k
		if v, ok := m[sum-k]; ok {
			count += v
		}

		// increment the frequency of the current cumulative sum
		m[sum]++
	}

	return count
}
