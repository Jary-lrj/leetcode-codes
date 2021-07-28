#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numWays(int steps, int arrLen)
    {
        vector<vector<int>> dp(501, vector<int>(501, 0));
        const int mod = 1e9 + 7;
        int real = min(steps, arrLen - 1);
        dp[0][0] = 1;
        for (int i = 0; i <= real; i++)
        {
            for (int j = 1; j <= steps; j++)
            {
                dp[i][j] = dp[i][j - 1];
                if (i - 1 >= 0)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % mod;
                if (i + 1 <= real)
                    dp[i][j] = (dp[i][j] + dp[i + 1][j - 1]) % mod;
            }
        }
        return dp[0][steps];
    }
};
int main()
{
    Solution s;
    s.numWays(4, 2);
}