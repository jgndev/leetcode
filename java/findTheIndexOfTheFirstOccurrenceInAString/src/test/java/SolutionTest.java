import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

public class SolutionTest {
    @Test
    void TestCaseOne() {
        Solution solution = new Solution();
        var haystack = "sadbutsad";
        var needle = "sad";
        var expected = 0;
        var result = solution.strStr(haystack, needle);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseTwo() {
        Solution solution = new Solution();
        var haystack = "leetcode";
        var needle = "leeto";
        var expected = -1;
        var result = solution.strStr(haystack, needle);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseThree() {
        Solution solution = new Solution();
        var haystack = "abcdef";
        var needle = "def";
        var expected = 3;
        var result = solution.strStr(haystack, needle);
        assertEquals(expected, result);
    }
}
