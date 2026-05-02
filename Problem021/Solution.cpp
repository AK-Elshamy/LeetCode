class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int divisibleByM = 0;
        int i = 1;
        while (i * m <= n)
        {
            divisibleByM += i * m;
            i += 1;
        }
        int notDivisibleByM = (n * (n + 1) / 2) - divisibleByM;
        return notDivisibleByM - divisibleByM;
    }
};
