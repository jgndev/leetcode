package solution

func repeatedChars(s string) byte {
	seen := make(map[rune]bool, len(s))

	for _, c := range s {
		if _, ok := seen[c]; ok {
			return byte(c)
		}

		seen[c] = true
	}

	return ' '
}
