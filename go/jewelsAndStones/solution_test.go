package solution

import "testing"

func TestNumJewelsInStones(t *testing.T) {
	testCases := []struct {
		name   string
		jewels string
		stones string
		want   int
	}{
		{"test case one", "aA", "aAAbbbb", 3},
		{"test case two", "z", "ZZ", 0},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := numJewelsInStones(tc.jewels, tc.stones)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
