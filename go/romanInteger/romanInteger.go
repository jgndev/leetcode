package romanInteger

func romanToInt(s string) int {
	n := len(s) - 1
	result := 0
	prev := 0

	// working from right to left
	for i := n; i >= 0; i-- {
		current := 0
		switch s[i] {
		case 'I':
			current = 1
		case 'V':
			current = 5
		case 'X':
			current = 10
		case 'L':
			current = 50
		case 'C':
			current = 100
		case 'D':
			current = 500
		case 'M':
			current = 1000
		}

		if current < prev {
			result -= current
		} else {
			result += current
		}

		prev = current
	}

	return result
}

// func romanToInt(s string) int {
// 	values := map[string]int{
// 		"I":  1,
// 		"V":  5,
// 		"X":  10,
// 		"L":  50,
// 		"C":  100,
// 		"D":  500,
// 		"M":  1000,
// 		"IV": 4,
// 		"IX": 9,
// 		"XL": 40,
// 		"XC": 90,
// 		"CD": 400,
// 		"CM": 900,
// 	}
//
// 	// calcualted result
// 	result := 0
// 	// pointer to track position in s
// 	i := 0
// 	// store the length of s instead of calling len(s) each iteration
// 	n := len(s)
//
// 	for i < n {
// 		// if we are still at least 2 characters from the end of s
// 		if i < n-1 {
// 			// get a substring from i to i + 2 exclusive
// 			// e.g. 0..1, 1..2, 2..3
// 			substring := s[i : i+2]
// 			v, ok := values[substring]
//
// 			if ok {
// 				// increase result by v
// 				result += v
// 				// increment i pointer by 2 positions
// 				i += 2
// 				// continue to next iteration
// 				continue
// 			}
// 		}
//
// 		// get the numeric value of s[i] from the map
// 		v := values[string(s[i])]
// 		// increase result by v
// 		result += v
// 		// increment i pointer
// 		i++
// 	}
//
// 	return result
// }
