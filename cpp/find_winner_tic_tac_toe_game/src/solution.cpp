#include "solution.h"

std::string Solution::tictactoe(std::vector<std::vector<int>>& moves) {
    // in is the size of the board, col and row width, or 3x3
    const int n = 3;

    // use rows and cols to record the value on each row and column.
    // diag1 and diag2 to record the value on diagonal and anti-diagonal.
    std::vector<int> rows(n), cols(n);
    int diag = 0;
    int anti_diag = 0;

    // the two players will be called 1 (player A) and -1 (player B).
    // player A always places a piece first.
    int player = 1;

    for (std::vector<int> move : moves) {
       // get the row and column number for this move.
        int row = move[0];
        int col = move[1];

        // update the row and col value.
        rows[row] += player;
        cols[col] += player;

        // if this move is placed on a diagonal or anti-diagonal,
        // we will update the relative value as well.
        // diagonal:
        if (row == col) {
            diag += player;
        }

        // anti-diagonal:
        if (row + col == n - 1) {
            anti_diag += player;
        }

        // check if this move meets any of the winning conditions.
        if (abs(rows[row]) == n || abs(cols[col]) == n || abs(diag) == n || abs(anti_diag) == n) {
            return player == 1 ? "A" : "B";
        }

        // if there is no winner, it is the other player's turn.
        // flip between 1 for player A and -1 for player B.
        player *= -1;
    }


    return moves.size() == n * n ? "Draw" : "Pending";
}