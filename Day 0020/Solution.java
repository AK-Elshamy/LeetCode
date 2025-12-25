
class Solution {

    public int longestConsecutive(int[] nums) {
        // Store all numbers in a HashMap for O(1) lookups
        HashMap<Integer, Boolean> map = new HashMap<>();
        for (int num : nums) {
            map.put(num, true);
        }

        int result = 0;

        // Iterate through each number in the map
        for (int num : map.keySet()) {
            // Only start counting from the smallest number in a sequence
            if (!map.containsKey(num - 1)) {
                int currentNum = num;
                // Count the length of the current sequence
                while (map.containsKey(currentNum)) {
                    currentNum++;
                }
                // Update the result if current sequence is longer
                result = Math.max(result, currentNum - num);
            }
        }

        return result;
    }
}