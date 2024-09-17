package solution

import "testing"

func TestFindMaxAverage(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		k    int
		want float64
	}{
		{
			name: "test case one",
			nums: []int{1, 12, -5, -6, 50, 3},
			k:    4,
			want: 12.75,
		},
		{
			name: "test case two",
			nums: []int{5},
			k:    1,
			want: 5.0,
		},
		{
			name: "test case three",
			nums: []int{-1, -2, -3, -4, -5},
			k:    3,
			want: -2.0,
		},
		{
			name: "test case four",
			nums: []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
			k:    3,
			want: 9.0,
		},
		{
			name: "test case five",
			nums: []int{100000, 200000, 300000, 400000},
			k:    2,
			want: 350000.0,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := findMaxAverage(tc.nums, tc.k)

			if got != tc.want {
				t.Errorf("got %f, want %f", got, tc.want)
			}
		})
	}
}
