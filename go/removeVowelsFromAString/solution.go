package solution

import "strings"

func removeVowels(s string) string {
	// place vowels in a map
	vowels := map[rune]bool{'a': true, 'e': true, 'i': true, 'o': true, 'u': true}

	sb := strings.Builder{}

	for _, c := range s {
		// if c is not in the vowels map
		if _, ok := vowels[c]; !ok {
			// append to the string builder
			sb.WriteRune(c)
		}
	}

	return sb.String()
}
