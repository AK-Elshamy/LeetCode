class Solution {
    public int findNumbers(int[] A) {
        int count = 0;
        for (int num : A) {
            if (hasEvenDigits(num)) {
                count++;
            }
        }
        return count;
    }

    private boolean hasEvenDigits(int num) {
        int digitCount = 0;
        while (num != 0) {
            num /= 10;
            digitCount++;
        }
        return digitCount % 2 == 0;
    }
}