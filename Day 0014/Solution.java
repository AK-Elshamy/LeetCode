import java.util.ArrayList;
import java.util.List;

class Solution {
    public int[] findEvenNumbers(int[] digits) {
        // Count frequency of input digits
        int[] digitFreq = new int[10];
        for (int digit : digits) {
            digitFreq[digit]++;
        }

        // List to store valid numbers
        List<Integer> result = new ArrayList<>();

        // Check all even numbers from 100 to 998
        for (int num = 100; num <= 998; num += 2) {
            // Skip numbers with leading zeros
            if (num < 100)
                continue;

            // Count frequency of current number's digits
            int[] numFreq = new int[10];
            int temp = num;
            while (temp > 0) {
                numFreq[temp % 10]++;
                temp /= 10;
            }

            // Check if we can form this number
            boolean valid = true;
            for (int i = 0; i < 10; i++) {
                if (numFreq[i] > digitFreq[i]) {
                    valid = false;
                    break;
                }
            }

            // Add valid numbers to result
            if (valid) {
                result.add(num);
            }
        }

        // Convert List to array
        return result.stream().mapToInt(Integer::intValue).toArray();
    }
}
