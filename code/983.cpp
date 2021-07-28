#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        int lastDay = days.back();
        vector<int> dp(lastDay + 1, 0);
        int dayIndex = 0;
        for (int i = 1; i <= lastDay; i++)
        {
            if (days[dayIndex] != i)
                dp[i] = dp[i - 1];
            else
            {
                dp[i] = min(min(dp[(i - 1) >= 0 ? i - 1 : 0] + costs[0], dp[(i - 7) >= 0 ? i - 7 : 0] + costs[1]), dp[(i - 30) >= 0 ? i - 30 : 0] + costs[2]);
                dayIndex++;
            }
        }
        return dp[lastDay];
    }
};
int main()
{
}