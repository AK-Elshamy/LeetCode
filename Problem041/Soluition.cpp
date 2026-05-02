class Solution
{
public:
    int countVowelStrings(int n)
    {
        int dp[n + 1][5];

        for (int j = 0; j < 5; ++j)
            dp[0][j] = 1;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 4; j >= 0; --j)
            {
                if (j == 4)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i][j + 1] + dp[i - 1][j];
            }
        }

        return dp[n][0];
    }
};