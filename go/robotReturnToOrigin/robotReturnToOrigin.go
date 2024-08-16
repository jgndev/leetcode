package robotReturnToOrigin

func judgeCircle(moves string) bool {
	// initialize a starting x and y at 0
	x := 0
	y := 0

	for _, m := range moves {
		// movements have the same magnitude in all directions
		switch m {
		case 'U':
			y--
		case 'D':
			y++
		case 'L':
			x--
		case 'R':
			x++
		default:
			break

		}
	}

	return x == 0 && y == 0
}
