package solution

func countElements(arr []int) int {
	n := len(arr)
	m := make(map[int]bool, n)

	for _, num := range arr {
		// simulate a hash set, only add the num if not already present
		if _, ok := m[num]; !ok {
			m[num] = true
		}
	}

	count := 0

	for _, num := range arr {
		// check if num + 1 is in the hash set
		if _, ok := m[num+1]; ok {
			count++
		}
	}

	return count
}
