#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int len = bloomDay.size();
        if (len < m * k)
            return -1;
        int low = INT_MAX, high = 0;
        for (int i = 0; i < len; i++)
        {
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }
        while (low < high)
        {
            int mid = low + (high - low) / 2;
            if (canMake(bloomDay, m, mid, k))
            {
                high = mid;
            }
            else
                low = mid + 1;
        }
        return low;
    }
    bool canMake(vector<int> &bloomDay, int m, int days, int k)
    {
        int bunch = 0;
        int flower = 0;
        int len = bloomDay.size();
        for (int i = 0; i < len && bunch < m; i++)
        {
            if (bloomDay[i] <= days)
            {
                flower++;
                if (flower == k)
                {
                    bunch++;
                    flower = 0;
                }
            }
            else
            {
                flower = 0;
            }
        }
        return bunch >= m;
    }
};