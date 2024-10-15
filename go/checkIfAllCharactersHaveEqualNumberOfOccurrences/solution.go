package solution

func areOccurrencesEqual(s string) bool {
	// create a map to store counts of all runes in s.
	runeMap := make(map[rune]int)

	// add all runes in the stirng to runeMap.
	for _, r := range s {
		runeMap[r]++
	}

	// grab the count of the first character in s as the sentinel to check.
	sentinel := runeMap[rune(s[0])]

	// loop through the runeMap to check the rune counts.
	for _, v := range runeMap {
		// if we find any value that is not the same then all runes in the
		// string do not have equal occurrences, return false.
		if v != sentinel {
			return false
		}
	}

	// did not find a rune with a different count, return true.
	return true
}
