class Solution {
    public int differenceOfSums(int n, int m) {
        int DivisibleByM = 0;
        int i = 1;
        while (i * m <= n) {
            DivisibleByM += i * m;
            i += 1;
        }
        int NotDivisibleByM = (n * (n + 1) / 2) - DivisibleByM;
        int result = NotDivisibleByM - DivisibleByM;
        return result;
    }
}