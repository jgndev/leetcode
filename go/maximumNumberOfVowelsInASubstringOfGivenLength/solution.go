package solution

func maxVowels(s string, k int) int {
	// Define a map of vowels for quick lookup
	vowels := map[rune]bool{
		'a': true,
		'e': true,
		'i': true,
		'o': true,
		'u': true,
	}

	// left - pointer to the left side of the window
	// count - current count of vowels in the window
	// maxCount - maximum count of vowels seen so far
	left, count, maxCount := 0, 0, 0

	// initialize the first window of size k
	for right := 0; right < k; right++ {
		// check if the rune is a vowel
		if vowels[rune(s[right])] {
			count++
		}
	}

	// set initial maxCount
	maxCount = count

	// get the length of s once
	n := len(s)

	// slide the window through the rest of the string
	for right := k; right < n; right++ {
		// if the rune entering the window is a vowel
		if vowels[rune(s[right])] {
			// increment count
			count++
		}

		// if the rune leaving the window is a vowel
		if vowels[rune(s[left])] {
			// decrement count
			count--
		}

		// move the left pointer forward
		left++

		// update maxCount if we have found a new maximum
		if count > maxCount {
			maxCount = count
		}

	}

	return maxCount
}
