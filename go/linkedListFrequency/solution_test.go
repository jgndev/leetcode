package linkedListFrequency

import (
	"slices"
	"testing"
)

// createList is a helper function to create a linked list from a slice
func createList(values []int) *Node {
	dummy := &Node{}
	current := dummy

	for _, v := range values {
		current.next = &Node{val: v}
		current = current.next
	}

	return dummy.next
}

// listToSlice is a helper function to convert a linked list to a slice
func listToSlice(head *Node) []int {
	var result []int

	for head != nil {
		result = append(result, head.val)
		head = head.next
	}

	return result
}

// helper function

func TestFrequenciesOfElements(t *testing.T) {
	testCases := []struct {
		name  string
		input []int
		want  []int
	}{
		{
			name:  "test case one",
			input: []int{1, 2, 3, 4, 5},
			want:  []int{1, 1, 1, 1, 1},
		},
		{
			name:  "test case two",
			input: []int{3, 3, 3, 2, 1},
			want:  []int{3, 1, 1},
		},
		{
			name:  "test case three",
			input: nil,
			want:  nil,
		},
		{
			name:  "test case four",
			input: []int{2, 2, 2, 2, 2},
			want:  []int{5},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			// create linked list from input slice
			ll := createList(tc.input)
			got := frequenciesOfElements(ll)
			gotSlice := listToSlice(got)

			if !slices.Equal(gotSlice, tc.want) {
				t.Errorf("got %v, want %v", gotSlice, tc.want)
			}

		})
	}
}
