// https://leetcode.com/problems/maximum-matrix-sum?envType=daily-question&envId=2026-01-05

class Solution {
    public long maxMatrixSum(int[][] matrix) {
        int countOdd = 0;
        long sums = 0;
        int minNumber = (int) 1e6;

        for (int[] row : matrix) {

            for (int i : row) {

                if (i < 0)
                    countOdd += 1;

                sums += Math.abs(i);
                minNumber = Math.min(Math.abs(i), minNumber);

            }
        }

        return sums - (countOdd % 2 == 1 ? 2 * minNumber : 0);

    }
}