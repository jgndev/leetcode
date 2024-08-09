public class Solution {
    public String mergeAlternately(String word1, String word2) {
        // n1 and n2 get the length of word1 and word2 respectively.
        // used as a bounds check while looping through the strings.
        var n1 = word1.length();
        var n2 = word2.length();

        // p1 and p2 are pointers for tracking the character position
        // in the string while looping through word1 and word2.
        var p1 = 0;
        var p2 = 0;

        // StringBuilder used for building the string as we alternate
        // through word1 and word2.
        StringBuilder sb = new StringBuilder();

        // while either p1 is less than n1 OR p2 is less than n2
        // continue adding characters to the string builder.
        while (p1 < n1 || p2 < n2) {
            if (p1 < n1) {
                sb.append(word1.charAt(p1));
                p1++;
            }

            if (p2 < n2) {
                sb.append(word2.charAt(p2));
                p2++;
            }
        }

        return sb.toString();
    }
}
