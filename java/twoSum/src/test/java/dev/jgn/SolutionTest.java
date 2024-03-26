package dev.jgn;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertArrayEquals;

public class SolutionTest {

    @Test
    public void testCaseOne() {
        Solution solution = new Solution();
        var numbers = new int[] {2, 7, 11, 15};
        var target = 9;
        var result = solution.twoSum(numbers, target);

        assertArrayEquals(new int[]{0, 1}, result);
    }

    @Test
    public void testCaseTwo() {
        Solution solution = new Solution();
        var numbers = new int[]{1, 5, 3, 4};
        var target = 10;
        var result = solution.twoSum(numbers, target);

        assertArrayEquals(new int[]{}, result);
    }

    @Test
    public void testCaseThree() {
        Solution solution = new Solution();
        var numbers = new int[]{-1, -2, -3, -4};
        var target = -5;
        var result = solution.twoSum(numbers, target);

        assertArrayEquals(new int[]{1, 2}, result);
    }

    @Test
    public void testCaseFour() {
        Solution solution = new Solution();
        var numbers = new int[] {3, 2, 3};
        var target = 6;
        var result = solution.twoSum(numbers, target);

        assertArrayEquals(new int[] {0, 2}, result);
    }

    @Test
    public void testCaseFive() {
        Solution solution = new Solution();
        var numbers = new int[] {5_000, 1_000, 5_000, 2_000};
        var target = 3_000;
        var result = solution.twoSum(numbers, target);

        assertArrayEquals(new int[] {1, 3}, result);
    }
}
