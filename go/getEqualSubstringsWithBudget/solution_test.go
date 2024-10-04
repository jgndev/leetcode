package solution

import "testing"

func TestEqualString(t *testing.T) {
	testCases := []struct {
		name    string
		s       string
		t       string
		maxCost int
		want    int
	}{
		{
			name:    "test case one",
			s:       "abcd",
			t:       "bcdf",
			maxCost: 3,
			want:    3,
		},
		{
			name:    "test case two",
			s:       "abcd",
			t:       "cdef",
			maxCost: 3,
			want:    1,
		},
		{
			name:    "test case three",
			s:       "abcd",
			t:       "acde",
			maxCost: 0,
			want:    1,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := equalSubstring(tc.s, tc.t, tc.maxCost)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
