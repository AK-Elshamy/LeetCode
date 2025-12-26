class Solution {
public:
    int bestClosingTime(string customers) 
    {

        int n = customers.size();
        vector<int> pre_N(n + 1, 0), pre_Y(n + 1, 0);

        for (int i = 0; i < n; ++i){
            pre_N[i + 1] = pre_N[i] + (customers[i] == 'N' ? 1 : 0);
            pre_Y[i + 1] = pre_Y[i] + (customers[i] == 'Y' ? 1 : 0);
        }

        vector<int> penalty(n + 1, INT_MAX);

        for (int j = 0; j <= n; ++j){
            penalty[j] = pre_N[j] + (pre_Y[n] - pre_Y[j]);
        }

        int min_penalty = INT_MAX, bestClosingTime = 0;

        for (int k = 0; k <= n; ++k){
            if (penalty[k] < min_penalty){
                min_penalty = penalty[k];
                bestClosingTime = k;
            }
        }
        return bestClosingTime;
        
    }
};