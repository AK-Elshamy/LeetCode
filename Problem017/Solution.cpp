class Solution
{
public:
    // Method 1: Using Hash Sets (O(m+n) Space)
    void setZeroesHashSet(vector<vector<int>> &matrix)
    {
        unordered_map<int, bool> ROWS, COLS;
        int n = matrix.size();
        int m = matrix.front().size();

        // First pass: Mark rows and columns containing zeros
        for (int row = 0; row < n; ++row)
        {
            for (int col = 0; col < m; ++col)
            {
                if (!matrix[row][col])
                {
                    ROWS[row] = true;
                    COLS[col] = true;
                }
            }
        }

        // Second pass: Set zeros
        for (const auto &[row, _] : ROWS)
        {
            for (int col = 0; col < m; ++col)
            {
                matrix[row][col] = 0;
            }
        }

        for (const auto &[col, _] : COLS)
        {
            for (int row = 0; row < n; ++row)
            {
                matrix[row][col] = 0;
            }
        }
    }

    // Method 2: In-place Solution (O(1) Space)
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix.front().size();
        bool firstRow = false, firstCol = false;

        // Check if first row/column needs to be zero
        for (int i = 0; i < n; ++i)
        {
            if (!matrix[i][0])
                firstCol = true;
        }
        for (int j = 0; j < m; ++j)
        {
            if (!matrix[0][j])
                firstRow = true;
        }

        // Use first row/column as markers
        for (int i = 1; i < n; ++i)
        {
            for (int j = 1; j < m; ++j)
            {
                if (!matrix[i][j])
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set zeros based on markers
        for (int i = 1; i < n; ++i)
        {
            for (int j = 1; j < m; ++j)
            {
                if (!matrix[i][0] || !matrix[0][j])
                {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first row/column
        if (firstRow)
        {
            for (int j = 0; j < m; ++j)
                matrix[0][j] = 0;
        }
        if (firstCol)
        {
            for (int i = 0; i < n; ++i)
                matrix[i][0] = 0;
        }
    }
};