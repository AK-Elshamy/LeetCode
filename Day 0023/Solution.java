import java.util.HashSet;

class Solution {
    // Method 1: Using Hash Sets (O(m+n) Space)
    public void setZeroesHashSet(int[][] matrix) {
        HashSet<Integer> ROWS = new HashSet<>();
        HashSet<Integer> COLS = new HashSet<>();

        int n = matrix.length;
        int m = matrix[0].length;

        // First pass: Mark rows and columns containing zeros
        for (int row = 0; row < n; ++row) {
            for (int col = 0; col < m; ++col) {
                if (matrix[row][col] == 0) {
                    ROWS.add(row);
                    COLS.add(col);
                }
            }
        }

        // Second pass: Set zeros
        for (int row : ROWS) {
            for (int col = 0; col < m; ++col) {
                matrix[row][col] = 0;
            }
        }

        for (int col : COLS) {
            for (int row = 0; row < n; ++row) {
                matrix[row][col] = 0;
            }
        }
    }

    // Method 2: In-place Solution (O(1) Space)
    public void setZeroes(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        boolean firstRow = false, firstCol = false;

        // Check if first row/column needs to be zero
        for (int i = 0; i < n; ++i) {
            if (matrix[i][0] == 0)
                firstCol = true;
        }
        for (int j = 0; j < m; ++j) {
            if (matrix[0][j] == 0)
                firstRow = true;
        }

        // Use first row/column as markers
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set zeros based on markers
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first row/column
        if (firstRow) {
            for (int j = 0; j < m; ++j)
                matrix[0][j] = 0;
        }
        if (firstCol) {
            for (int i = 0; i < n; ++i)
                matrix[i][0] = 0;
        }
    }
}