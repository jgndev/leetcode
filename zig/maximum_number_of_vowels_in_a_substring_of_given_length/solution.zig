const std = @import("std");

// Checks if a given character is a vowel
fn isVowel(c: u8) bool {
    return switch (c) {
        'a', 'e', 'i', 'o', 'u' => true,
        else => false,
    };
}

// Finds the maximum number of vowels in any substring of length k
pub fn maxVowels(s: []const u8, k: usize) usize {
    // initialize variables
    var count: usize = 0; // current count of vowels in the window
    var maxCount: usize = 0; // maximum count of vowels seen so far

    // count vowels in the first window of size k
    for (s[0..@min(k, s.len)]) |c| {
        if (isVowel(c)) {
            count += 1;
        }
    }

    // update maxCount ot the current count and continue
    maxCount = count;

    // slide the window through the rest of the string
    var i: usize = k;
    while (i < s.len) : (i += 1) {
        // if the character entering the window is a vowel
        if (isVowel(s[i])) {
            // increment count
            count += 1;
        }

        // if the character leaving the window is a vowel
        if (isVowel(s[i - k])) {
            // decrement count
            count -= 1;
        }

        // update maxCount if we've found a new max
        maxCount = @max(maxCount, count);
    }

    return maxCount;
}

test "test case one" {
    const s = "abciiidef";
    const k = 3;
    const expected = 3;
    const result = maxVowels(s, k);
    try std.testing.expectEqual(result, expected);
}

test "test case two" {
    const s = "aeiou";
    const k = 3;
    const expected = 3;
    const result = maxVowels(s, k);
    try std.testing.expectEqual(result, expected);
}

test "test case three" {
    const s = "leetcode";
    const k = 3;
    const expected = 2;
    const result = maxVowels(s, k);
    try std.testing.expectEqual(result, expected);
}
