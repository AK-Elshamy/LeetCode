#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        int rows = grid.size();
        int cols = grid[0].size();
        int answer = 0;

        // Sort each row in descending order
        for (auto &row : grid)
        {
            sort(row.begin(), row.end(), greater<int>());
        }

        // Find maximum in each column and add to answer
        for (int col = 0; col < cols; col++)
        {
            int maxInCol = 0;
            for (int row = 0; row < rows; row++)
            {
                maxInCol = max(maxInCol, grid[row][col]);
            }
            answer += maxInCol;
        }

        return answer;
    }
};
