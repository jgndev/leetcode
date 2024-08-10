import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class SolutionTest {
    @Test
    void TestCaseOne() {
        var s = "aabc";
        var t = "aabct";
        var expected = 't';
        var solution = new Solution();
        var result = solution.findTheDifference(s, t);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseTwo() {
        var s = "xdef";
        var t = "yxdef";
        var expected = 'y';
        var solution = new Solution();
        var result = solution.findTheDifference(s, t);
        assertEquals(expected, result);
    }
}
