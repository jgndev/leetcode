package solution

import "testing"

func TestContainsDuplicate(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		want bool
	}{
		{
			name: "test case one",
			nums: []int{1, 2, 3, 1},
			want: true,
		},
		{
			name: "test case two",
			nums: []int{1, 2, 3, 4},
			want: false,
		},
		{
			name: "test case three",
			nums: []int{1, 1, 1, 3, 3, 4, 3, 2, 4, 2},
			want: true,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := containsDuplicate(tc.nums)

			if got != tc.want {
				t.Errorf("got %t, want %t", got, tc.want)
			}
		})
	}
}
