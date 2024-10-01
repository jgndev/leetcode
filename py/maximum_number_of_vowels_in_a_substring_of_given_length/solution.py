class Solution:
    def max_vowels(self, s: str, k: int) -> int:
        # define a set of vowels for quick lookup
        vowels = set("aeiou")

        # initialize variables
        count = sum(1 for char in s[:k] if char in vowels)
        max_count = count

        # get the length of s once
        n = len(s)

        # slide the window through the rest of the string
        for i in range(k, n):
            # if the character entering the window is a vowel
            if s[i] in vowels:
                count += 1

            # if the character leaving the window is a vowel
            if s[i - k] in vowels:
                count -= 1

            # update max_count if there is a new max
            max_count = max(max_count, count)

        return max_count
