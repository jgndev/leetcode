import java.util.HashMap;

//public class Solution {
//    public boolean isAnagram(String s, String t) {
//        // strings must be equal length to be an anagram
//        if (s.length() != t.length()) {
//            return false;
//        }
//
//        HashMap<Character, Integer> freq = new HashMap<>();
//
//        for (int i = 0; i < s.length(); i++) {
//            // get the character at the ith position in s
//            var sc = s.charAt(i);
//            // get the character at the ith position in t
//            var tc = t.charAt(i);
//
//            // increment the character count for sc
//            freq.put(sc, freq.getOrDefault(sc, 0) + 1);
//            // decrement the character count for tc
//            freq.put(tc, freq.getOrDefault(tc, 0) - 1);
//        }
//
//        for (int i = 0; i < freq.size(); i++) {
//            var sc = s.charAt(i);
//            // if any character in the map has a non-zero value
//            // the two strings are not an anagram
//            if (freq.get(sc) != 0) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//}

//class Solution {
//    public boolean isAnagram(String s, String t) {
//        if (s.length() != t.length()) {
//            return false;
//        }
//
//        var freq = new int[26];
//
//        for (int i = 0; i < s.length(); i++) {
//            freq[s.charAt(i) - 'a']++;
//            freq[t.charAt(i) - 'a']--;
//        }
//
//        for (int count: freq) {
//            if (count != 0) {
//                return false;
//            }
//        }
//
//
//        return true;
//    }
//}

class Solution {
    public boolean isAnagram(String s, String t) {
        // strings must be equal length to be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // new array that can hold lowercase english alphabet
        var count = new int[26];

        for (char c : s.toCharArray()) {
            count[c - 'a']++;
        }

        for (char c : t.toCharArray()) {
            if (--count[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
}