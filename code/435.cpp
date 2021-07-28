#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), [](const auto &n1, const auto &n2)
             { return n1[0] < n2[0] });
        int len = intervals.size();
        vector<int> dp(len + 1, 1);
        for (int i = 1; i < len; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (intervals[j][1] <= intervals[i][0])
                    dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
        return len - *max_element(dp.begin(), dp.end());
    }
};
int main()
{
}