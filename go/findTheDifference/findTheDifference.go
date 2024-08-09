package findthedifference

// findTheDifference using an XOR solution for O(n) time and O(1) space
func findTheDifference(s, t string) byte {
	var result byte

	for i := 0; i < len(s); i++ {
		result ^= s[i]
	}

	for i := 0; i < len(t); i++ {
		result ^= t[i]
	}

	return result
}

// findTheDifference using a map solution for O(n) time and O(n) space
// func findTheDifference(s, t string) byte {
// 	charCount := make(map[rune]int)
//
// 	for _, c := range s {
// 		charCount[c]++
// 	}
//
// 	for _, c := range t {
// 		charCount[c]--
//
// 		// if we find a character whose count becomes negative
// 		// that is the extra character. characters with a count
// 		// of zero or should have been added and subtracted once
// 		// for each time they were seen.
// 		if charCount[c] < 0 {
// 			return byte(c)
// 		}
// 	}
//
// 	// should never reach this
// 	return 0
// }
