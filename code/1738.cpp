#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int kthLargestValue(vector<vector<int>> &matrix, int k)
    {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        priority_queue<int, vector<int>, greater<int>> queue;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dp[i][j] = dp[i - 1][j] ^ dp[i - 1][j - 1] ^ dp[i][j - 1] ^ matrix[i - 1][j - 1];
                if (queue.size() < k)
                    queue.push(dp[i][j]);
                else if (dp[i][j] > queue.top())
                {
                    queue.pop();
                    queue.push(dp[i][j]);
                }
            }
        }
        return queue.top();
    }
};