#include <vector>
#include <string>
#include <algorithm> // for count_if

using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &A)
    {
        auto hasEvenDigits = [&](int x)
        {
            return to_string(x).length() % 2 == 0;
        };
        return count_if(A.begin(), A.end(), hasEvenDigits);
    }
};