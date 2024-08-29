package solution

import (
	"slices"
	"testing"
)

// Helper function to create a linked list from a slice of integers
func createList(values []int) *Node {
	dummy := &Node{}
	current := dummy
	for _, val := range values {
		current.next = NewNode(val)
		current = current.next
	}
	return dummy.next
}

// Helper function to convert a linked list to a slice of integers
func listToSlice(head *Node) []int {
	var result []int
	for head != nil {
		result = append(result, head.val)
		head = head.next
	}
	return result
}

func TestDeleteDuplicates(t *testing.T) {
	testCases := []struct {
		name  string
		input []int
		want  []int
	}{
		{
			name:  "test case one",
			input: []int{1, 1, 2, 3, 3},
			want:  []int{1, 2, 3},
		},
		{
			name:  "test case two",
			input: []int{1, 1, 1, 1, 1},
			want:  []int{1},
		},
		{
			name:  "test case three",
			input: []int{1, 2, 3, 4, 5},
			want:  []int{1, 2, 3, 4, 5},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			head := createList(tc.input)
			result := deleteDuplicates(head)
			resultSlice := listToSlice(result)

			if !slices.Equal(resultSlice, tc.want) {
				t.Errorf("deleteDuplicates() = %v, want %v", resultSlice, tc.want)
			}
		})
	}
}
