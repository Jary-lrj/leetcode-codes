#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int waysToChange(int n)
    {
        vector<int> dp(n + 1);
        int cost[5] = {25, 10, 5, 1};
        int mod = 1e9 + 7;
        dp[0] = 1;
        for (int c = 0; c <= 3; c++)
        {
            int coin = cost[c];
            for (int i = coin; i <= n; i++)
            {
                dp[i] = (dp[i] + dp[i - coin]) % mod;
            }
        }
        return dp[n];
    }
};
int main()
{
}