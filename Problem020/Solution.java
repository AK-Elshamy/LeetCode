class Solution {
    public boolean isPalindrome(int x) {
        // Negative numbers and numbers ending with 0 (except 0 itself) are not
        // palindromes
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }

        // Handle single digit numbers
        if (x < 10) {
            return true;
        }

        int reversedHalf = 0;

        // Only process half of the digits
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + (x % 10);
            x /= 10;
        }

        // For even length numbers: x == reversedHalf
        // For odd length numbers: x == reversedHalf/10
        return x == reversedHalf || x == reversedHalf / 10;
    }
}