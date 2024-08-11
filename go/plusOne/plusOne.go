package plusOne

func plusOne(digits []int) []int {
	// move through digits from end to start
	for i := len(digits) - 1; i >= 0; i-- {
		// set all the nines to zeroes
		if digits[i] == 9 {
			digits[i] = 0
		} else {
			// here we have the right-most non-nine
			// increment it by 1
			digits[i]++
			// return digits
			return digits
		}
	}

	// all the numbers were nines that were changed to 0s
	// append a leading 1 onto the beginning of the array
	// and append the remaining array of zeroes to the end
	digits = append([]int{1}, digits...)
	return digits
}
