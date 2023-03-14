#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        vector<bool> dp(n, false);
        dp[n - 1] = true;
        int right = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] + i >= right)
            {
                dp[i] = true;
                right = i;
            }
        }
        return dp[0];
    }
};