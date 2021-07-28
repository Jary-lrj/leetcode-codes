#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int ans = x ^ y;
        int cnt = 0;
        while (ans)
        {
            if (!(ans & 1))
                ans >>= 1;
            else if (ans & 1)
            {
                cnt++;
                ans >>= 1;
            }
        }
        return cnt;
    }
};