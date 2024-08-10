//import java.util.HashMap;
//import java.util.Map;

public class Solution {
    public char findTheDifference(String s, String t) {
        char result = 0;

        // using XOR operation to cancel out characters
        // while iterating the character array
        for (char c: s.toCharArray()) {
            result ^= c;
        }

        // result will have the character that didn't
        // get cancelled out during XOR
        for (char c: t.toCharArray()) {
            result ^= c;
        }

        return result;
    }

//    public char findTheDifference(String s, String t) {
//        Map<Character, Integer> charCount = new HashMap<>();
//
//        for (char c: s.toCharArray()) {
//            charCount.put(c, charCount.getOrDefault(c, 0) + 1);
//        }
//
//        for (char c: t.toCharArray()) {
//            if (!charCount.containsKey(c) || charCount.get(c) == 0) {
//                return c;
//            }
//
//            charCount.put(c, charCount.get(c) - 1);
//        }
//
//        return 0;
//    }
}
