package solution

type Node struct {
	val  int
	next *Node
	prev *Node
}

func NewNode(v int) *Node {
	return &Node{
		val:  v,
		next: nil,
		prev: nil,
	}
}

func toArray(head *Node) []int {
	curr := head

	nums := make([]int, 0, 2)

	for curr != nil {
		nums = append(nums, curr.val)

		curr = curr.next
	}

	return nums
}
