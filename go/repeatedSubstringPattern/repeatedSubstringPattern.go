package repeatedSubstringPattern

import "strings"

func repeatedSubstringPattern(s string) bool {
	n := len(s)
	// check if the length of s is less than 2, if so it cannot have
	// a repeated substring so return false
	if n < 2 {
		return false
	}

	// iterate from 1 to n / 2 (inclusive) to check all possible substring
	// lengths that could repeat to form the entire string.
	for i := 1; i <= n/2; i++ {
		// check for potential substring length i, if it is a divisor
		// of the string length
		if n%i == 0 {
			// create a substring of that length
			substring := s[:i]
			// repeat it n / i times
			repeated := strings.Repeat(substring, n/i)
			// if the result is the same string as s found a match
			if repeated == s {
				return true
			}
		}
	}
	return false
}
