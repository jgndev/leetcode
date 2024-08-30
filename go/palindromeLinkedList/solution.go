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

func isPalindrome(head *Node) bool {
	// base case - empty lists or lists with single nodes are palindromes
	if head == nil || head.next == nil {
		return true
	}

	// step 1: find the middle of the list
	slow, fast := head, head

	// when fast reaches the end, slow should be in the middle
	// "tortoise and hare" algorithm
	for fast.next != nil && fast.next.next != nil {
		// move slow one step forward
		slow = slow.next
		// move fast two steps forward
		fast = fast.next.next
	}

	// step 2: reverse the second half of the list
	// the second half is the node after slow
	secondHalf := reverseList(slow.next)

	// step 3: compare the first and second halves
	firstHalf := head

	for secondHalf != nil {
		// if the values don't match, it is not a palindrome
		if firstHalf.val != secondHalf.val {
			return false
		}

		// move both forward
		firstHalf = firstHalf.next
		secondHalf = secondHalf.next
	}

	// no differences between first and second havles, list is a palindrome
	return true
}

func reverseList(head *Node) *Node {
	// initial pointers for reversing the list
	var prev *Node
	curr := head

	for curr != nil {
		// store the next node
		nextTemp := curr.next
		// reverse the link, point curr.next to prev
		curr.next = prev
		// move prev and curr one step forward
		prev = curr
		curr = nextTemp
	}

	// prev is now the head of the revesed list
	return prev
}
