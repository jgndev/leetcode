package solution

import "slices"

func findWinners(matches [][]int) [][]int {
	losses := make(map[int]int)

	// iterate over each match in matches
	for _, match := range matches {
		// take the first element as winner, second as loser
		winner, loser := match[0], match[1]

		// check if the winner is already in the losses map
		if _, ok := losses[winner]; !ok {
			// first time seeing this winner
			losses[winner] = 0
		}

		// increment the loss count for the loser
		losses[loser]++
	}

	// slice for winners with no losses
	noLoss := make([]int, 0)
	// slice for winners with one loss
	oneLoss := make([]int, 0)

	// categorize players based on their losses
	for player, lossCount := range losses {
		if lossCount == 0 {
			noLoss = append(noLoss, player)
		} else if lossCount == 1 {
			oneLoss = append(oneLoss, player)
		}
	}

	// sort both slices
	slices.Sort(noLoss)
	slices.Sort(oneLoss)

	// return the result as a 2D slice
	return [][]int{noLoss, oneLoss}
}
