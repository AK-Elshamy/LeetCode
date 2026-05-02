#include <vector>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int x = 0;
        for (const auto &n : nums)
            x ^= n;
        return x;
    }
};