class Solution {
    public int arrangeCoins(int n) {
        long left = 1, right = 100000;
        int result = 1;

        while (left <= right) {
            int mid = (int) ((left + right) / 2);
            long current = (long) mid * (mid + 1) / 2;

            if (current > n) {
                right = mid - 1;
            } else {
                result = mid;
                left = mid + 1;
            }
        }

        return result;
    }
}