#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSpaceWastedKResizing(vector<int> &nums, int k)
    {
        int len = nums.size();
        vector<vector<int>> dp(len, vector<int>(len));
        for (int i = 0; i < len; i++)
        {
            int temp = INT_MIN;
            int sum = 0;
            for (int j = i; j < len; j++)
            {
                temp = max(temp, nums[j]);
                sum += nums[j];
                dp[i][j] = temp * (j - i + 1) - sum;
            }
        }
        vector<vector<int>> f(len, vector<int>(k + 2, INT_MAX / 2));
        for (int i = 0; i < len; i++)
        {
            for (int j = 1; j <= k + 1; j++)
            {
                for (int m = 0; m <= i; m++)
                {
                    f[i][j] = min(f[i][j], (m == 0 ? 0 : f[m - 1][j - 1]) + dp[m][i]);
                }
            }
        }
        return f[len - 1][k + 1];
    }
};
int main()
{
    return 0;
}