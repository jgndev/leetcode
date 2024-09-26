package solution

import "testing"

func TestGetCommon(t *testing.T) {
	testCases := []struct {
		name  string
		nums1 []int
		nums2 []int
		want  int
	}{
		{
			name:  "test case one",
			nums1: []int{1, 2, 3},
			nums2: []int{2, 4},
			want:  2,
		},
		{
			name:  "test case two",
			nums1: []int{1, 2, 3, 6},
			nums2: []int{2, 3, 4, 5},
			want:  2,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := getCommon(tc.nums1, tc.nums2)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
