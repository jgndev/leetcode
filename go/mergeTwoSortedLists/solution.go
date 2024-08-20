package solution

type Node struct {
	val  int
	next *Node
}

func NewNode(val int) *Node {
	return &Node{
		val:  val,
		next: nil,
	}
}

func mergeTwoLists(l1, l2 *Node) *Node {

	// handle cases where either l1 or l2 are nil at the start
	if l1 == nil {
		return l2
	}

	if l2 == nil {
		return l1
	}

	// create a dummy node to simplify creating the linked list
	dummy := NewNode(-1)
	// tail is the node all operations will work from
	tail := dummy

	for l1 != nil && l2 != nil {
		if l1.val < l2.val {
			tail.next = l1
			l1 = l1.next
		} else {
			tail.next = l2
			l2 = l2.next
		}

		tail = tail.next
	}

	if l1 != nil {
		tail.next = l1
	} else if l2 != nil {
		tail.next = l2
	}

	return dummy.next
}
