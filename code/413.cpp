#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        int len = nums.size();
        vector<int> dp(len + 1);
        int ans = 0;
        for (int i = 2; i < len; i++)
        {
            if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
                dp[i] = dp[i - 1] + 1;
            ans += dp[i];
        }
        return ans;
    }
};
int main()
{
    
}