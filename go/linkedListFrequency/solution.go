package linkedListFrequency

import "slices"

type Node struct {
	val  int
	next *Node
}

func frequenciesOfElements(head *Node) *Node {
	// return early if head is nil
	if head == nil {
		return head
	}

	frequencies := make(map[int]int)
	current := head

	// loop through the nodes and add the values to the frequencies map
	for current != nil {
		frequencies[current.val]++
		current = current.next
	}

	// convert to an []int and sort, start with 0 len and capacity
	// matching length of frequencies
	freqs := make([]int, 0, len(frequencies))

	for _, v := range frequencies {
		freqs = append(freqs, v)
	}

	// sort the []int of frequencies in descending order, e.g. 5 -> 4 -> 3 -> 2 -> 1
	slices.SortFunc(freqs, func(a, b int) int {
		return b - a
	})

	// create a new list with the sorted frequencies
	dummy := &Node{val: 0, next: nil}
	tail := dummy

	for _, v := range freqs {
		tail.next = &Node{v, nil}
		tail = tail.next
	}

	return dummy.next
}
