package solution

import "testing"

func TestMiddleNode(t *testing.T) {
	testCases := []struct {
		name string
		list []int
		want int
	}{
		{
			name: "test case one",
			list: []int{1, 2, 3, 4, 5},
			want: 3,
		},
		{
			name: "test case two",
			list: []int{1, 2, 3, 4, 5, 6},
			want: 4,
		},
		{
			name: "test case three",
			list: []int{1},
			want: 1,
		},
		{
			name: "test case four",
			list: []int{1, 2},
			want: 2,
		},
		{
			name: "test case five",
			list: []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11},
			want: 6,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			var head *Node
			var current *Node

			for _, val := range tc.list {
				node := NewNode(val)
				if head == nil {
					head = node
					current = node
				} else {
					current.next = node
					current = node
				}
			}

			got := middleNode(head)

			if got.val != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
