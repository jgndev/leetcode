package solution

func numJewelsInStones(jewels, stones string) int {
	// map for storing runes in string jewels
	jmap := make(map[rune]int)

	// loop over jewels adding/incrementing each to the map
	for _, r := range jewels {
		jmap[r]++
	}

	// initialize the return value
	total := 0

	// for each rune in the string stones
	for _, r := range stones {
		// if the rune is found in the jewels map (jmap)
		if _, ok := jmap[r]; ok {
			// increment the return value (total)
			total++
		}
	}

	return total
}
