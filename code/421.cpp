#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaximumXOR(vector<int> &nums)
    {
        int len = nums.size();
        int ans = 0;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < i; j++)
            {
                ans = max(ans, nums[i] ^ nums[j]);
            }
        }
        return ans;
    }
};