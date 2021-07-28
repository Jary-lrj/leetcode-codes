#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int knightDialer(int n)
    {
        vector<vector<long long>> dp(11, vector<long long>(5001, 0));
        int mod = 1e9 + 7;
        for (int i = 0; i <= 9; i++)
        {
            dp[i][1] = 1;
        }
        for (int j = 2; j <= n; j++)
        {
            for (int i = 9; i >= 0; i--)
            {
                if (i == 1)
                    dp[i][j] = (dp[i + 5][j - 1] + dp[i + 7][j - 1]) % mod;
                else if (i == 2)
                    dp[i][j] = (dp[i + 5][j - 1] + dp[i + 7][j - 1]) % mod;
                else if (i == 3)
                    dp[i][j] = (dp[i + 5][j - 1] + dp[i + 1][j - 1]) % mod;
                else if (i == 4)
                    dp[i][j] = (dp[i - 1][j - 1] + dp[i + 5][j - 1] + dp[i - 4][j - 1]) % mod;
                else if (i == 5)
                    dp[i][j] = 0;
                else if (i == 6)
                    dp[i][j] = (dp[i - 5][j - 1] + dp[i + 1][j - 1] + dp[i - 6][j - 1]) % mod;
                else if (i == 7)
                    dp[i][j] = (dp[i - 5][j - 1] + dp[i - 1][j - 1]) % mod;
                else if (i == 8)
                    dp[i][j] = (dp[i - 5][j - 1] + dp[i - 7][j - 1]) % mod;
                else if (i == 9)
                    dp[i][j] = (dp[i - 5][j - 1] + dp[i - 7][j - 1]) % mod;
                else if (i == 0)
                    dp[i][j] = (dp[i + 4][j - 1] + dp[i + 6][j - 1]) % mod;
            }
        }
        long long ans = 0;
        for (int i = 0; i <= 9; i++)
        {
            ans += dp[i][n];
            ans %= mod;
        }
        return ans;
    }
};
int main()
{

    return 0;
}