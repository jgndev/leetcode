package solution

func maxVal(a, b int) int {
	if a > b {
		return a
	}

	return b
}

func largestAltitude(gain []int) int {
	high, curr, n := 0, 0, len(gain)

	for i := 0; i < n; i++ {
		curr += gain[i]

		high = maxVal(high, curr)
	}

	return high
}
