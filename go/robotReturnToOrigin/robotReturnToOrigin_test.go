package robotReturnToOrigin

import "testing"

func TestRobotReturnToOrigin(t *testing.T) {
	testCases := []struct {
		name  string
		moves string
		want  bool
	}{
		{"test case one", "UD", true},
		{"test case two", "LL", false},
		{"test case three", "RR", false},
		{"test case four", "UDLR", true},
		{"test case five", "UULDDR", true},
		{"test case six", "DDDRRUUULL", true},
		{"test case six", "RRDDLLUUU", false},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := judgeCircle(tc.moves)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
