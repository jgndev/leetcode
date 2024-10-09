package solution

import "testing"

func TestNumArray(t *testing.T) {
	// example test case from the problem
	nums := []int{-2, 0, 3, -5, 2, -1}
	na := Constructor(nums)

	testCases := []struct {
		left  int
		right int
		want  int
	}{
		{0, 2, 1},
		{2, 5, -1},
		{0, 5, -3},
	}

	for _, tc := range testCases {
		got := na.SumRange(tc.left, tc.right)
		if got != tc.want {
			t.Errorf("got %d, want %d", got, tc.want)
		}
	}
}
