#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumDeleteSum(string s1, string s2)
    {
        int len1 = s1.size(), len2 = s2.size();
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < len1; i++)
            sum1 += s1[i];
        for (int j = 0; j < len2; j++)
            sum2 += s2[j];
        vector<vector<int>> dp(1001, (vector<int>(1001, 0)));
        for (int i = 1; i <= len1; i++)
        {
            for (int j = 1; j <= len2; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + s1[i - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return sum1 + sum2 - dp[len1][len2] * 2;
    }
};