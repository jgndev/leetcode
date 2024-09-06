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

func middleNode(head *Node) *Node {
	slow := head
	fast := head

	for fast != nil && fast.next != nil {
		// move slow by one step
		slow = slow.next
		// move fast by two steps
		fast = fast.next.next
	}

	return slow
}
