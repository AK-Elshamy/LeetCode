// https://leetcode.com/problems/four-divisors?envType=daily-question&envId=2026-01-04
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        
        int sums = 0;
        for (int &i : nums){

            int cur = 0;
            int div = 0;

            for (int k = 1; k * k <= i; ++k){

                if (i % k == 0){
                    div += 1;
                    cur += k;
                    if ( k * k != i){
                        div += 1;
                        cur += i / k;
                    }
                }
            }

            sums += (div == 4 ? cur : 0);

        }
        return sums;
    }
};