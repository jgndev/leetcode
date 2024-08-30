package solution

import (
	"testing"
)

// Helper function to create a linked list from a slice of integers
func createLinkedList(values []int) *Node {
	dummy := &Node{}
	curr := dummy

	for _, val := range values {
		curr.next = &Node{val: val}
		curr = curr.next
	}

	return dummy.next
}

func TestIsPalindrome(t *testing.T) {
	testCases := []struct {
		name  string
		input []int
		want  bool
	}{
		{
			name:  "test case one",
			input: []int{1, 2, 3, 2, 1},
			want:  true,
		},
		{
			name:  "test case two",
			input: []int{1, 2, 3, 4, 5},
			want:  false,
		},
		{
			name:  "test case three",
			input: []int{1},
			want:  true,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			head := createLinkedList(tc.input)
			got := isPalindrome(head)

			if got != tc.want {
				t.Errorf("isPalindrome() = %v, want %v", got, tc.want)
			}
		})
	}
}
