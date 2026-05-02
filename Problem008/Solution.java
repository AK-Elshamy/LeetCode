public class Solution {
    private static final int MOD = 1000000007;

    public int lengthAfterTransformations(String s, int t) {
        // Initialize frequency array for 26 letters
        long[] freq = new long[26];

        // Count initial frequencies
        for (char ch : s.toCharArray()) {
            freq[ch - 'a']++;
        }

        // Initialize length with input string length
        long len = s.length();

        // Perform t transformations
        while (t-- > 0) {
            // Count number of 'z's
            long zCount = freq[25];

            // Update length (each 'z' adds 1 character)
            len = (len + zCount) % MOD;

            // Shift frequencies from back to front
            for (int i = 25; i > 0; i--) {
                freq[i] = freq[i - 1];
            }

            // Handle 'z' → "ab" transformation
            freq[0] = zCount; // 'a's from "ab"
            freq[1] = (freq[1] + zCount) % MOD; // 'b's from "ab"
        }

        return (int) len;
    }
}