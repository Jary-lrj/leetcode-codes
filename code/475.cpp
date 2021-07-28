#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findRadius(vector<int> &houses, vector<int> &heaters)
    {
        int res = 0;
        int len = heaters.size();
        sort(heaters.begin(), heaters.end());
        for (auto &house : houses)
        {
            int left = 0, right = len;
            while (left < right)
            {
                int mid = left + (right - left) / 2;
                if (heaters[mid] < house)
                    left = mid + 1;
                else
                    right = mid;
            }
            int dist1 = (right == 0) ? INT_MAX : abs(house - heaters[right - 1]);
            int dist2 = (right == len - 1) ? INT_MAX : abs(house - heaters[right]);
            res = max(res, min(dist1, dist2));
        }
        return res;
    }
};