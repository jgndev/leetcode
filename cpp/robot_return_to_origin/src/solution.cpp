#include "solution.h"

bool Solution::jump_circle(std::string moves) {
    // initialize starting x and y position
    int x = 0, y = 0;

    for (const char m: moves) {
        // moves have the same magnitude in all directions
        switch (m) {
            case 'U':
                y--;
                break;
            case 'D':
                y++;
                break;
            case 'L':
                x--;
                break;
            case 'R':
                x++;
                break;
            default:
                break;
        }
    }

    // true if the starting x and y are back at 0
    return x == 0 && y == 0;
}
