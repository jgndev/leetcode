const std = @import("std");
const testing = std.testing;
const ArrayList = std.ArrayList;

pub fn reverseWords(allocator: std.mem.Allocator, s: []const u8) ![]u8 {
    var result = ArrayList(u8).init(allocator);
    defer result.deinit();

    var start: usize = 0;

    for (s, 0..) |char, i| {
        if (char == ' ' or i == s.len - 1) {
            var end = if (char == ' ') i - 1 else i;

            while (end >= start) : (end -= 1) {
                try result.append(s[end]);
                if (end == start) break;
            }

            if (i < s.len - 1) {
                try result.append(' ');
            }

            start = i + 1;
        }
    }

    return result.toOwnedSlice();
}

test "test case one" {
    const allocator = std.testing.allocator;
    const input = "Let's take LeetCode contest";
    const expected = "s'teL ekat edoCteeL tsetnoc";

    const result = try reverseWords(allocator, input);
    defer allocator.free(result);

    try testing.expectEqualStrings(result, expected);
}

test "test case two" {
    const allocator = std.testing.allocator;
    const input = "Mr Ding";
    const expected = "rM gniD";

    const result = try reverseWords(allocator, input);
    defer allocator.free(result);

    try testing.expectEqualStrings(result, expected);
}
