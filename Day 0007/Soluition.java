
class Solution {
    public int numEquivDominoPairs(int[][] dominoes) {
        // Array to store counts of each unique domino (no HashMap needed!)
        int[] counts = new int[100];
        int result = 0;
        
        for (int[] domino : dominoes) {
            // Normalize the domino representation (smaller value first)
            int val1 = domino[0];
            int val2 = domino[1];
            
            // Math trick: create a unique key for this domino
            int key = Math.min(val1, val2) * 10 + Math.max(val1, val2);
            
            // Add the count of pairs we can form with existing dominoes
            result += counts[key];
            
            // Increment the count for this domino
            counts[key]++;
        }
        
        // Final result - all pairs found in O(n) time! 🔥
        return result;
    }
}
}