import java.util.HashMap;
import java.util.Map;

class Solution {
   
    public boolean canConstruct(String ransomNote, String magazine) {
        // Early return if ransomNote is longer than magazine
        if (ransomNote.length() > magazine.length()) {
            return false;
        }

        // Use a single map to store character frequencies
        Map<Character, Integer> charCount = new HashMap<>();

        // Count characters in magazine
        for (char c : magazine.toCharArray()) {
            charCount.put(c, charCount.getOrDefault(c, 0) + 1);
        }

        // Check if we have enough characters for ransomNote
        for (char c : ransomNote.toCharArray()) {
            // Get current count or 0 if character not present
            int count = charCount.getOrDefault(c, 0);

            // If we don't have enough characters, return false
            if (count == 0) {
                return false;
            }

            // Decrement the count as we use this character
            charCount.put(c, count - 1);
        }

        return true;
    }
}
