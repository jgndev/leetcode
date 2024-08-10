import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class SolutionTest {

    @Test
    void TestCaseOne() {
        Solution solution = new Solution();
        var s = "monkeyswrite";
        var t = "newyorktimes";
        var expected = true;
        var result = solution.isAnagram(s, t);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseTwo() {
        Solution solution = new Solution();
        var s = "anagram";
        var t = "nagaram";
        var expected = true;
        var result = solution.isAnagram(s, t);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseThree() {
        Solution solution = new Solution();
        var s = "rat";
        var t = "car";
        var expected = false;
        var result = solution.isAnagram(s, t);
        assertEquals(expected, result);
    }
}
