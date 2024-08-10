package validanagram

func validAnagram(s, t string) bool {
	// s and t have to be of equal length to be
	// an anagram of each other
	if len(s) != len(t) {
		return false
	}

	// map for storing the found runes in s and t
	// runes will be incremented for s, and decremented for t
	freq := make(map[rune]int, len(s))

	for i, c := range s {
		// get the rune at the ith position in t
		tc := rune(t[i])
		// increment the rune count for the rune c found in s
		freq[c]++
		// decrement the rune count for the rune tc found in t
		freq[tc]--
	}

	// now loop over freq and find any key with a value greater
	// than zero. a non-zero value means that runes in s and t
	// were different and they are not anagrams
	for _, count := range freq {
		if count != 0 {
			return false
		}
	}

	return true
}
