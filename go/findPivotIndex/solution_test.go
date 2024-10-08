package solution

import "testing"

func TestPivotIndex(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		want int
	}{
		{
			name: "test case one",
			nums: []int{1, 7, 3, 6, 5, 6},
			want: 3,
		},
		{
			name: "test case two",
			nums: []int{1, 2, 3},
			want: -1,
		},
		{
			name: "test case three",
			nums: []int{2, 1, -1},
			want: 0,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := pivotIndex(tc.nums)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
