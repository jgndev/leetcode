package validWordAbbreviation

import "unicode"

func validWordAbbreviation(word, abbr string) bool {
	wordIndex := 0
	abbrIndex := 0

	for wordIndex < len(word) && abbrIndex < len(abbr) {
		// if characters match, move both pointers
		if word[wordIndex] == abbr[abbrIndex] {
			wordIndex++
			abbrIndex++
			continue
		}

		// if current char in abbr is not a digit, return false
		if !unicode.IsDigit(rune(abbr[abbrIndex])) {
			return false
		}

		num := 0
		if abbr[abbrIndex] == '0' {
			// leading zeros are not allowed, return false
			return false
		}

		for abbrIndex < len(abbr) && unicode.IsDigit(rune(abbr[abbrIndex])) {
			// convert to a number
			num = num*10 + int(abbr[abbrIndex]-'0')
			abbrIndex++
		}

		// move word pointer by the num found
		wordIndex += num
	}

	return wordIndex == len(word) && abbrIndex == len(abbr)
}
