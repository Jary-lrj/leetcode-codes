#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findLongestChain(vector<vector<int>> &pairs)
    {
        int n = pairs.size();
        vector<int> dp(n, 1);
        if (pairs.empty())
            return 0;
        sort(pairs.begin(), pairs.end(), cmp);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (pairs[j][1] < pairs[i][0])
                    dp[i] = max(dp[i], dp[j] + 1);
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
    bool cmp(vector<int> a, vector<int> b)
    {
        if (a[0] < b[0])
            return a[0] < b[0];
        else if (a[0] == b[0])
            return a[1] < b[1];
    }
};