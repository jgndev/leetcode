import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class SolutionTest {
    @Test
    void TestCaseOne() {
        var word1 = "abc";
        var word2 = "pqr";
        var solution = new Solution();
        var expected = "apbqcr";
        var result = solution.mergeAlternately(word1, word2);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseTwo() {
        var word1 = "ab";
        var word2 = "pqrs";
        var expected = "apbqrs";
        var solution = new Solution();
        var result = solution.mergeAlternately(word1, word2);
        assertEquals(expected, result);
    }

    @Test
    void TestCaseThree() {
        var word1 = "abcd";
        var word2 = "pq";
        var expected = "apbqcd";
        var solution = new Solution();
        var result = solution.mergeAlternately(word1, word2);
        assertEquals(expected, result);
    }
}
