package solution

type NumArray struct {
	values []int
}

func Constructor(nums []int) NumArray {
	// get the length of nums once.
	n := len(nums)
	// create a slice for storing prefix sum computed values.
	// we need an extra element at the beginning to represent
	// the sum of 0 elements.
	prefixSum := make([]int, n+1)

	for i := 0; i < n; i++ {
		// i + i because the first element is 0 to represent the sum of 0 elements.
		// the sums of elements start at index 1 and go to the end.
		prefixSum[i+1] = prefixSum[i] + nums[i]
	}

	return NumArray{
		values: prefixSum,
	}
}

func (na *NumArray) SumRange(left, right int) int {
	return na.values[right+1] - na.values[left]
}
