package solution

import (
	"testing"
)

type testCases struct {
	name string
	list *Node
	want bool
}

func TestHasCycle(t *testing.T) {
	tests := []testCases{
		{
			name: "test case one",
			list: nil,
			want: false,
		},
		{
			name: "test case two",
			list: func() *Node {
				return NewNode(1)
			}(),
			want: false,
		},
		{
			name: "test case three",
			list: func() *Node {
				head := NewNode(1)
				head.next = NewNode(2)
				head.next.next = NewNode(3)
				head.next.next.next = NewNode(4)
				return head
			}(),
			want: false,
		},
		{
			name: "test case four",
			list: func() *Node {
				head := NewNode(1)
				head.next = NewNode(2)
				head.next.next = NewNode(3)
				head.next.next.next = head // Create cycle
				return head
			}(),
			want: true,
		},
		{
			name: "test case five",
			list: func() *Node {
				head := NewNode(1)
				head.next = NewNode(2)
				cycleStart := NewNode(3)
				head.next.next = cycleStart
				cycleStart.next = NewNode(4)
				cycleStart.next.next = NewNode(5)
				cycleStart.next.next.next = cycleStart // Create cycle
				return head
			}(),
			want: true,
		},
	}

	for _, tc := range tests {
		t.Run(tc.name, func(t *testing.T) {
			result := hasCycle(tc.list)

			if result != tc.want {
				t.Errorf("want hasCycle to return %v, but got %v", tc.want, result)
			}
		})
	}
}
