package solution

func maxVal(a, b int) int {
	if a > b {
		return a
	}

	return b
}

func abs(x int) int {
	if x < 0 {
		return -x
	}

	return x
}

func equalSubstring(s, t string, maxCost int) int {
	// get the length of s once
	n := len(s)

	// maxLen: track the maximum length of valid substring so far.
	// start: the start index of the current window.
	// currCost: the current cost of the operations in the window.
	maxLen, start, currCost := 0, 0, 0

	for end := 0; end < n; end++ {
		cost := abs(int(s[end]) - int(t[end]))

		currCost += cost

		for currCost > maxCost {
			currCost -= abs(int(s[start]) - int(t[start]))
			start++
		}

		maxLen = maxVal(maxLen, end-start+1)

	}

	return maxLen
}
