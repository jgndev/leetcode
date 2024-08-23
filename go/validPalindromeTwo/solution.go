package solution

func checkPalindrome(s string, left, right int) bool {
	for left < right {
		if s[left] != s[right] {
			return false
		}

		left++
		right--
	}

	return true
}

func validPalindrome(s string) bool {
	left := 0
	right := len(s) - 1

	for left < right {
		if s[left] != s[right] {
			// found a mismatch
			// try the string without the rightmost character
			checkLeft := checkPalindrome(s, left, right-1)
			// try the string without the leftmost character
			checkRight := checkPalindrome(s, left+1, right)
			return checkLeft || checkRight
		}

		left++
		right--
	}

	return true
}
