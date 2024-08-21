package solution

func scoreOfString(s string) int {
	score := 0

	for i := 0; i < len(s)-1; i++ {
		// take a diff of the integer result of comparing i and i + i
		diff := int(s[i]) - int(s[i+1])
		// if diff is a negative number, flip it
		if diff < 0 {
			diff = -diff
		}

		// append to score
		score += diff
	}

	return score
}
