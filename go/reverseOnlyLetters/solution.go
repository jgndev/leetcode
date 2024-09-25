package solution

import "unicode"

func reverseOnlyLetters(s string) string {
	runes := []rune(s)
	left, right := 0, len(runes)-1

	for left < right {
		// move the left pointer forward until we find a letter
		for left < right && !unicode.IsLetter(runes[left]) {
			left++
		}

		// move the right pointer backwards until we find a letter
		for right > left && !unicode.IsLetter(runes[right]) {
			right--
		}

		// swap the letters
		if left < right {
			runes[left], runes[right] = runes[right], runes[left]
			left++
			right--
		}
	}

	return string(runes)
}
