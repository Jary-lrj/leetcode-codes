#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int length = matrix.size();
        vector<vector<int>> dp(length + 1, (vector<int>(length + 2, 0)));
        for (int j = 0; j < length + 1; j++)
        {
            dp[j][0] = INT_MAX;
            dp[j][length + 1] = INT_MAX;
        }
        for (int i = 1; i < length + 1; i++)
        {
            for (int j = 1; j < length + 1; j++)
            {
                dp[i][j] = min(min(dp[i - 1][j - 1], dp[i - 1][j]), dp[i - 1][j + 1]) + matrix[i - 1][j - 1];
            }
        }
        int ans = INT_MAX;
        for (int i = 0; i < length + 2; i++)
            ans = min(ans, dp[length][i]);
        return ans;
    }
};