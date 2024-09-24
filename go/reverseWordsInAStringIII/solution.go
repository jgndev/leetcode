package solution

import "strings"

func reverseWords(s string) string {
	// initialize string builder for efficient string manipulation
	var sb strings.Builder
	// track the index of the last space encountered
	lastSpaceIndex := -1
	// get the length of the input string once
	n := len(s)

	// iterate through each character in the string including one past the end
	for i := 0; i <= n; i++ {
		// check if we are at a word boundary, a space or the end of the string
		if i == n || s[i] == ' ' {
			// start from the end of the current word
			end := i - 1
			// iterate backwards through the current word
			for pos := end; pos > lastSpaceIndex; pos-- {
				// add each character to the string builder in reverse order
				sb.WriteByte(s[pos])
			}

			// if we are not at the end of the string, add a space after
			// the reversed word
			if i < n {
				sb.WriteByte(' ')
			}

			// update the last space index to the current position
			lastSpaceIndex = i
		}
	}

	// convert the string builder to a string and return
	return sb.String()
}
