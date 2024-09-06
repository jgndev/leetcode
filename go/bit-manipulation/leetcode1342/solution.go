package solution

func numberOfSteps(num int) int {
	// early return if num is 0
	if num == 0 {
		return 0
	}

	steps := 0

	for num > 1 {
		// check if the number is odd
		if num&1 == 1 {
			// two steps would be required
			// 1. subtract 1 from number
			// 2. divide number by 2
			steps += 2
		} else {
			// even numbers only need one step, divide by 2
			steps++
		}

		// divide by 2 using right shift
		num >>= 1
	}

	return steps + 1
}
