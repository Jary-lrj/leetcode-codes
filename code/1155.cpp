#include <bits/stdc++.h>>
using namespace std;
class Solution
{
public:
    int numRollsToTarget(int d, int f, int target)
    {
        const int mod = 1e9 + 7;
        vector<vector<int>> dp(d + 1, vector<int>(f + 1, 0));
        dp[0][0] = 1;
        for (int i = 1; i <= d; i++)
        {
            for (int j = i; j <= target; j++)
            {
                for (int k = 1; k <= f && j - k >= 0; k++)
                {
                    dp[i][j] = dp[i][j] + dp[i - 1][j - k];
                    dp[i][j] %= mod;
                }
            }
        }
        return dp[d][target];
    }
};