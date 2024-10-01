const std = @import("std");

pub fn minSubArrayLen(target: i32, nums: []const i32) i32 {
    var left: usize = 0;
    var sum: i32 = 0;
    var result: i32 = std.math.maxInt(i32);

    for (nums, 0..) |num, right| {
        sum += num;

        while (sum >= target) {
            const current: i32 = @intCast(right - left + 1);
            result = @min(result, current);
            sum -= nums[left];
            left += 1;
        }
    }

    return if (result != std.math.maxInt(i32)) result else 0;
}

test "test case one" {
    const nums = [_]i32{2, 3, 1, 2, 4, 3};
    const target: i32 = 7;
    const expected: i32 = 2;
    const result: i32 = minSubArrayLen(target, &nums);

    try std.testing.expectEqual(result, expected);
}

test "test case two" {
    const nums = [_]i32{1, 4, 4};
    const target: i32 = 4;
    const expected: i32 = 1;
    const result: i32 = minSubArrayLen(target, &nums);

    try std.testing.expectEqual(result, expected);
}

test "test case three" {
    const nums = [_]i32{1,1,1,1,1,1,1,1};
    const target: i32 = 11;
    const expected: i32 = 0;
    const result: i32 = minSubArrayLen(target, &nums);

    try std.testing.expectEqual(result, expected);
}