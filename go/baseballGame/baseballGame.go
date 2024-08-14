package baseballGame

import "strconv"

func baseballGame(operations []string) int {
	// make a new slice with 0 len and len(operations) capacity
	scores := make([]int, 0, len(operations))
	total := 0

	for _, o := range operations {
		n := len(scores)

		switch o {
		case "+":
			if n >= 2 {
				score := scores[n-1] + scores[n-2]
				scores = append(scores, score)
				total += score
			}
		case "D":
			if n >= 1 {
				score := 2 * scores[n-1]
				scores = append(scores, score)
				total += score
			}
		case "C":
			if n >= 1 {
				total -= scores[n-1]
				scores = scores[:n-1]
			}
		default:
			score, _ := strconv.Atoi(o)
			scores = append(scores, score)
			total += score

		}
	}

	return total
}
