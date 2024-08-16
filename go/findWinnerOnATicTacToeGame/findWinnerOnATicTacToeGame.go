package findWinnerOnATicTacToeGame

func tictactoe(moves [][]int) string {
	// n is the size of the board, col and row width, or 3x3
	n := 3

	// use rows and cols to record the value on each row and column.
	// diag1 and diag2 to record the value on diagonal and anti-diagonals.
	rows := make([]int, 3, 3)
	cols := make([]int, 3, 3)
	diag := 0
	anti_diag := 0

	// the two players will be called 1 (player A) and -1 (player B)
	// player A always places a piece first.
	player := 1

	for _, m := range moves {
		// get the row and column number for this move
		row := m[0]
		col := m[1]

		// update the row and col value
		rows[row] += player
		cols[col] += player

		// if this move is placed on a diagonal or anti-diagonal
		// we will update the relative value as well.
		// diagonal:
		if row == col {
			diag += player
		}

		// anti-diagonal:
		if row+col == n-1 {
			anti_diag += player
		}

		// check if this move meets any of the winning conditions.
		if abs(rows[row]) == n || abs(cols[col]) == n || abs(diag) == n || abs(anti_diag) == n {
			if player == 1 {
				return "A"
			}

			return "B"
		}

		// if there is no winner, it is the other player's turn.
		// flip between 1 for player A and -1 for player B.
		player *= -1
	}

	// it was either a Draw or Pending
	if len(moves) == n*n {
		return "Draw"
	}

	return "Pending"
}

func abs(x int) int {
	if x < 0 {
		return -x
	}

	return x
}
