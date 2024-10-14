package solution

import "testing"

func TestCountElements(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		want int
	}{
		{
			name: "test case one",
			nums: []int{1, 2, 3},
			want: 2,
		},
		{
			name: "test case two",
			nums: []int{1, 1, 3, 3, 5, 5, 7, 7},
			want: 0,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := countElements(tc.nums)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
