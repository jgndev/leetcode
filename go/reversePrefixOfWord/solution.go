package solution

func reversePrefix(word string, ch byte) string {
	// get a slice of runes of word
	runes := []rune(word)

	// get a left and right pointer that start at the beginning
	// of word, we'll move right forward each step
	left, right := 0, 0
	// store the length of word once
	n := len(word)

	// loop through the string moving the right pointer each step
	for right < n {
		if runes[right] == rune(ch) {
			// found ch, now we need to start swapping
			for left < right {
				runes[left], runes[right] = runes[right], runes[left]
				left++
				right--
			}

			// early return, done swapping already
			return string(runes)
		}

		// haven't found ch yet, keep moving forward
		right++
	}

	// never found ch, return the word unchanged
	return word
}
