class Solution {
    public int repeatedNTimes(int[] nums) {

        HashSet<Integer> seen = new HashSet<>();

        for (int n : nums) {
            if (!seen.add(n)) {
                return n;
            }
        }
        return -1;
    }
}