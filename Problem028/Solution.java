class Solution {
    public int[] plusOne(int[] digits) {
        int n = digits.length;

        int lastDigit = digits[n - 1];
        boolean done = true;
        if (lastDigit < 9) {
            digits[n - 1] = lastDigit + 1;
            return digits;
        } else {
            for (int i = n - 1; i >= 0; --i) {
                if (digits[i] == 9) {
                    digits[i] = 0;
                } else {
                    done = false;
                    digits[i] = digits[i] + 1;
                    return digits;
                }
            }
        }

        if (done) {

            int[] result = new int[n + 1];
            result[0] = 1;
            System.arraycopy(digits, 0, result, 1, n);
            return result;
        }
        return digits;

    }
}