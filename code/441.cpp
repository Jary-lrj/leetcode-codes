#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    using ll = long long;
    int arrangeCoins(int n)
    {
        ll left = 0, right = ll(n)+1;
        while (left <= right)
        {
            ll mid = (left + right) >> 1;
            ll cur = ((mid + 1) * mid) >> 1;
            if (cur > n)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left - 1;
    }
};