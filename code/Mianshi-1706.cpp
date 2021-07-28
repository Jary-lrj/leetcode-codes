#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOf2sInRange(int n)
    {
        if (n <= 1)
            return 0;
        if (n <= 11)
            return 1;
        int high = 0, low = 0, res = 0;
        for (long long i = 1; i <= n; i *= 10)
        {
            high = n / i;
            low = n % i;
            res += (high + 7) / 10 * i + (high % 10 == 2) * (low + 1);
        }
        return res;
    }
};