import java.util.*;

class Solution {
    public int deleteGreatestValue(int[][] grid) {
        int rows = grid.length;
        int cols = grid[0].length;
        int answer = 0;

        for (int[] row : grid) {
            Arrays.sort(row);
            for (int i = 0; i < row.length / 2; i++) {
                int temp = row[i];
                row[i] = row[row.length - 1 - i];
                row[row.length - 1 - i] = temp;
            }
        }

        for (int col = 0; col < cols; col++) {
            int maxInCol = 0;
            for (int row = 0; row < rows; row++) {
                maxInCol = Math.max(maxInCol, grid[row][col]);
            }
            answer += maxInCol;
        }

        return answer;
    }
}
