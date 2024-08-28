package solution

type Node struct {
	val  int
	next *Node
}

func NewNode(v int) *Node {
	return &Node{
		val:  v,
		next: nil,
	}
}

func gameResult(head *Node) string {
	// set even as the head node
	even := head
	// initialize trackers for even and odd points
	evenPoints := 0
	oddPoints := 0

	// traverse the linked list while there are nodes
	for even != nil {
		odd := even.next

		// if even's value is greater than odd's
		if even.val > odd.val {
			evenPoints++
		} else {
			oddPoints++
		}

		// update even to odd's next
		even = odd.next
	}

	// determine the winner
	if evenPoints == oddPoints {
		return "Tie"
	} else if evenPoints > oddPoints {
		return "Even"
	} else {
		return "Odd"
	}
}
