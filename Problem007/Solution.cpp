#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findEvenNumbers(vector<int> &digits)
    {
        // Count frequency of input digits
        vector<int> digitFreq(10, 0);
        for (int digit : digits)
        {
            digitFreq[digit]++;
        }

        // Vector to store valid numbers
        vector<int> result;

        // Check all even numbers from 100 to 998
        for (int num = 100; num <= 998; num += 2)
        {
            // Skip numbers with leading zeros
            if (num < 100)
                continue;

            // Count frequency of current number's digits
            vector<int> numFreq(10, 0);
            int temp = num;
            while (temp > 0)
            {
                numFreq[temp % 10]++;
                temp /= 10;
            }

            // Check if we can form this number
            bool valid = true;
            for (int i = 0; i < 10; i++)
            {
                if (numFreq[i] > digitFreq[i])
                {
                    valid = false;
                    break;
                }
            }

            // Add valid numbers to result
            if (valid)
            {
                result.push_back(num);
            }
        }

        return result;
    }
};
