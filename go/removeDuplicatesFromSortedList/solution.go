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

func deleteDuplicates(head *Node) *Node {
	curr := head

	for curr != nil && curr.next != nil {
		if curr.next.val == curr.val {
			// curr and curr's nedt have the same value, skip this node
			// by updating curr's next to the node after curr.next
			curr.next = curr.next.next
		} else {
			// update curr to curr's next to continue iterating the list
			curr = curr.next
		}
	}

	return head
}
