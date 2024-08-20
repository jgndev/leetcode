package solution

import (
	"slices"
	"testing"
)

// createList is a helper function to create a linked list from a slice
func createList(values []int) *Node {
	dummy := &Node{}
	current := dummy

	for _, v := range values {
		current.next = NewNode(v)
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

func TestMergeTwoLists(t *testing.T) {
	testCases := []struct {
		name string
		l1   []int
		l2   []int
		want []int
	}{
		{
			name: "test case one",
			l1:   []int{1, 3, 5},
			l2:   []int{2, 4, 6},
			want: []int{1, 2, 3, 4, 5, 6},
		},
		{
			name: "test case two",
			l1:   []int{1, 2, 3},
			l2:   []int{},
			want: []int{1, 2, 3},
		},
		{
			name: "test case three",
			l1:   []int{1, 2, 4},
			l2:   []int{1, 3, 4},
			want: []int{1, 1, 2, 3, 4, 4},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			l1 := createList(tc.l1)
			l2 := createList(tc.l2)
			got := mergeTwoLists(l1, l2)
			gotSlice := listToSlice(got)

			if !slices.Equal(gotSlice, tc.want) {
				t.Errorf("got %v, want %v", gotSlice, tc.want)
			}
		})
	}

}
