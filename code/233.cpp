#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countDigitOne(int n)
    {
        long s = 0;
        for (long num = n, i = 1; num; num /= 10, i *= 10)
        {
            if (num % 10 == 0)
                s = s + (num / 10) * i;
            else if (num % 10 == 1)
                s = s + (num / 10) * i + (n % i) + 1;
            else if (num % 10 > 1)
                s = s + ceil(num / 10.0) * i;
        }
        return s;
    }
};