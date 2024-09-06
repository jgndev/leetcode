package solution

func maximumWealth(accounts [][]int) int {
	maxWealth := 0

	for _, account := range accounts {
		customerWealth := 0
		for _, balance := range account {
			customerWealth += balance
		}

		maxWealth = max(maxWealth, customerWealth)
	}

	return maxWealth
}
