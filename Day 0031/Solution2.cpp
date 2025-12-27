class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int min_penalty = INT_MAX, bestClosingTime = 0;
        int pre_N = 0, post_Y = 0;

        for (char c : customers) {
            if (c == 'Y') post_Y++;
        }

        for (int j = 0; j <= n; ++j) {
            int penalty = pre_N + (post_Y);
            if (penalty < min_penalty) {
                min_penalty = penalty;
                bestClosingTime = j;
            }
            if (j < n) {
                if (customers[j] == 'N') {
                    pre_N++;
                } else {
                    post_Y--;
                }
            }
        }
        return bestClosingTime;
    }
};