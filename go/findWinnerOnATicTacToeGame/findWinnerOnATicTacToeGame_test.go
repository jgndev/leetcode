package findWinnerOnATicTacToeGame

import "testing"

func TestTicTacToe(t *testing.T) {
	testCases := []struct {
		name  string
		moves [][]int
		want  string
	}{
		{
			name:  "A wins horizontally",
			moves: [][]int{{0, 0}, {1, 1}, {0, 1}, {2, 2}, {0, 2}},
			want:  "A",
		},
		{
			name:  "B wins vertically",
			moves: [][]int{{0, 0}, {1, 1}, {0, 1}, {0, 2}, {1, 0}, {2, 0}},
			want:  "B",
		},
		{
			name:  "A wins diagonally",
			moves: [][]int{{0, 0}, {1, 1}, {1, 0}, {2, 1}, {2, 0}},
			want:  "A",
		},
		{
			name:  "Draw",
			moves: [][]int{{0, 0}, {1, 1}, {2, 0}, {1, 0}, {1, 2}, {2, 1}, {0, 1}, {0, 2}, {2, 2}},
			want:  "Draw",
		},
		{
			name:  "Pending",
			moves: [][]int{{0, 0}, {1, 1}, {2, 0}, {1, 0}},
			want:  "Pending",
		},
		{
			name:  "Empty board",
			moves: [][]int{},
			want:  "Pending",
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			result := tictactoe(tc.moves)
			if result != tc.want {
				t.Errorf("got %s, want %s", tc.want, result)
			}
		})
	}
}
