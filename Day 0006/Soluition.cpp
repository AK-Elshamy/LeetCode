
class Solution
{
public:
    int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
    {
        int start_top = tops[0];
        int start_bottom = bottoms[0];
        int i = 0, j = 0, n = tops.size();

        // Check if start_top can be in every position
        while (i < n && (tops[i] == start_top || bottoms[i] == start_top))
            ++i;

        // Check if start_bottom can be in every position
        while (j < n && (tops[j] == start_bottom || bottoms[j] == start_bottom))
            ++j;

        if (i != n && j != n)
            return -1;

        int res1 = INT_MAX;
        int res2 = INT_MAX;

        if (i == n)
        {
            int cnt_top = count(tops.begin(), tops.end(), start_top);
            int cnt_botm = count(bottoms.begin(), bottoms.end(), start_top);
            res1 = n - max(cnt_botm, cnt_top);
        }

        if (j == n)
        {
            int cnt_top = count(tops.begin(), tops.end(), start_bottom);
            int cnt_botm = count(bottoms.begin(), bottoms.end(), start_bottom);
            res2 = n - max(cnt_botm, cnt_top);
        }

        return min(res1, res2);
    }
};