package solution

func isValid(s string) bool {
	pairs := map[rune]rune{'[': ']', '{': '}', '(': ')'}
	stack := []rune{}

	for _, c := range s {
		// if it is an opening bracket, push it on the stack
		if _, ok := pairs[c]; ok {
			stack = append(stack, c)
		} else {
			// it is a closing bracket
			if len(stack) == 0 {
				// stack is empty, but we found a closing bracket
				return false
			}

			// get the top of the stack for comparison
			top := stack[len(stack)-1]
			if pairs[top] != c {
				// mis-matched closing bracket
				return false
			}

			// remove the last closing bracket, "popping" it
			stack = stack[:len(stack)-1]
		}
	}

	return len(stack) == 0
}
