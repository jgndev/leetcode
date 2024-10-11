package solution

func checkIfPanagram(sentence string) bool {
	runeMap := make(map[rune]bool, 26)

	for _, r := range sentence {
		if r >= 'a' && r <= 'z' {
			runeMap[r] = true
		}
	}

	return len(runeMap) == 26
}
