package solution

import "testing"

func TestMissingNumber(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		want int
	}{
		{
			name: "test case one",
			nums: []int{3, 0, 1},
			want: 2,
		},
		{
			name: "test case two",
			nums: []int{0, 1},
			want: 2,
		},
		{
			name: "test case three",
			nums: []int{9, 6, 4, 2, 3, 5, 7, 0, 1},
			want: 8,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := missingNumber(tc.nums)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
