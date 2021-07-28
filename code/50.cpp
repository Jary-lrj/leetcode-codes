#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double myPow(double x, int n)
    {
        double  res = 1.0;
        if (n < 0)
        {
            x = 1 / x;
            n = -n;
        }
        while (n != 0)
        {
            if (n & 1)
            {
                res *= x;
            }
            x *= x;
            n >>= 1;  
        }
        return res;
    }
};