package solution

import (
	"slices"
	"testing"
)

func TestMerge(t *testing.T) {
	testCases := []struct {
		name  string
		nums1 []int
		m     int
		nums2 []int
		n     int
		want  []int
	}{
		{
			name:  "test case one",
			nums1: []int{1, 2, 3, 0, 0, 0},
			m:     3,
			nums2: []int{2, 5, 6},
			n:     3,
			want:  []int{1, 2, 2, 3, 5, 6},
		},
		{
			name:  "test case two",
			nums1: []int{1},
			m:     1,
			nums2: []int{},
			n:     0,
			want:  []int{1},
		},
		{
			name:  "test case three",
			nums1: []int{0},
			m:     0,
			nums2: []int{1},
			n:     1,
			want:  []int{1},
		},
		{
			name:  "test case four",
			nums1: []int{4, 5, 6, 0, 0, 0},
			m:     3,
			nums2: []int{1, 2, 3},
			n:     3,
			want:  []int{1, 2, 3, 4, 5, 6},
		},
		{
			name:  "test case five",
			nums1: []int{1, 2, 3, 0, 0, 0},
			m:     3,
			nums2: []int{4, 5, 6},
			n:     3,
			want:  []int{1, 2, 3, 4, 5, 6},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			merge(tc.nums1, tc.nums2, tc.m, tc.n)
			if !slices.Equal(tc.nums1, tc.want) {
				t.Errorf("got %v, want %v", tc.want, tc.nums1)
			}
		})
	}
}
