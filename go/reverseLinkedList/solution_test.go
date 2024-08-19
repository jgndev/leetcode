package solution

import (
	"slices"
	"testing"
)

// createLinkedList is a helper function to create a linked list from a slice.
func createLinkedList(values []int) *ListNode {
	if len(values) == 0 {
		return nil
	}

	head := &ListNode{Val: values[0]}
	current := head

	for _, v := range values[1:] {
		current.Next = &ListNode{Val: v}
		current = current.Next
	}

	return head
}

// linkedListToSlice is a helper function for converting a linked list
// into a slice.
func linkedListToSlice(head *ListNode) []int {
	var result []int

	for head != nil {
		result = append(result, head.Val)
		head = head.Next
	}

	return result
}

func TestReverseList(t *testing.T) {
	testCases := []struct {
		name  string
		input []int
		want  []int
	}{
		{
			name:  "test case one",
			input: []int{1, 2, 3, 4, 5},
			want:  []int{5, 4, 3, 2, 1},
		},
		{
			name:  "test case two",
			input: []int{1},
			want:  []int{1},
		},
		{
			name:  "test case three",
			input: []int{100, 200, 300, 400, 500},
			want:  []int{500, 400, 300, 200, 100},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			input := createLinkedList(tc.input)
			result := reverseList(input)
			resultSlice := linkedListToSlice(result)

			if !slices.Equal(resultSlice, tc.want) {
				t.Errorf("want %v, got %v", tc.want, resultSlice)
			}
		})
	}
}
