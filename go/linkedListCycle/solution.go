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

func hasCycle(head *Node) bool {
	// empty lists and lists with one node cannot have a cycle
	if head == nil || head.next == nil {
		return false
	}

	// initialize two pointers, slow and fast.
	// 'slow' moves one step at a time.
	// 'fast' moves two steps at a time.
	slow := head
	// 'fast' starts on the next node, one step ahead.
	fast := head.next

	// if there *is no cycle*, 'fast' will reach the end of the list.
	// if there *is a cycle*, 'fast' will catch up to 'slow'.

	// continue until 'fast' reaches the end of the list
	for fast != nil && fast.next != nil {
		if slow == fast {
			// cycle detected
			return true
		}

		// move 'slow' forward one step
		slow = slow.next
		// move 'fast' forward two steps
		fast = fast.next.next
	}

	// base case, did not find a cycle
	return false
}
