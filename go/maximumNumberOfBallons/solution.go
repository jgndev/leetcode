package solution

func maxNumberOfBalloons(text string) int {
	counts := make(map[rune]int)

	for _, r := range text {
		counts[r]++
	}

	count := counts['b']
	count = min(count, counts['a'])
	count = min(count, counts['n'])
	count = min(count, counts['l']/2)
	count = min(count, counts['o']/2)

	return count
}
