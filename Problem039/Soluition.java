class Solution {
    public int minDominoRotations(int[] tops, int[] bottoms) {
        int startTop = tops[0];
        int startBottom = bottoms[0];
        int i = 0, j = 0, n = tops.length;

        // Check if startTop can be in every position
        while (i < n && (tops[i] == startTop || bottoms[i] == startTop))
            ++i;

        // Check if startBottom can be in every position
        while (j < n && (tops[j] == startBottom || bottoms[j] == startBottom))
            ++j;

        if (i != n && j != n)
            return -1;

        int res1 = Integer.MAX_VALUE;
        int res2 = Integer.MAX_VALUE;

        if (i == n) {
            int cntTop = 0, cntBottom = 0;
            for (int val : tops)
                if (val == startTop)
                    cntTop++;
            for (int val : bottoms)
                if (val == startTop)
                    cntBottom++;
            res1 = n - Math.max(cntTop, cntBottom);
        }

        if (j == n) {
            int cntTop = 0, cntBottom = 0;
            for (int val : tops)
                if (val == startBottom)
                    cntTop++;
            for (int val : bottoms)
                if (val == startBottom)
                    cntBottom++;
            res2 = n - Math.max(cntTop, cntBottom);
        }

        return Math.min(res1, res2);
    }
}