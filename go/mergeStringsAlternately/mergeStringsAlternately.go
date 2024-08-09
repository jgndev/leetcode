package mergestringsalternately

import "strings"

func mergeStringsAlternately(word1, word2 string) string {
	// convenience variables to get the length of word1 and word2
	n1 := len(word1)
	n2 := len(word2)

	// pointers for tracking the character position in word1 and word2
	p1 := 0
	p2 := 0

	// emptry string for appending characters
	var sb strings.Builder

	// while p1 is less than n1 or p2 is less than p2
	for p1 < n1 || p2 < n2 {
		if p1 < n1 {
			sb.WriteByte(word1[p1])
			p1++
		}

		if p2 < n2 {
			sb.WriteByte(word2[p2])
			p2++
		}
	}

	return sb.String()
}
