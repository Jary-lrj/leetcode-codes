#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() <= 0)
            return 0;
        int len = nums.size();
        int ans = 0, cur = 1;
        for (int i = 1; i < len; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                if (nums[i] - nums[i - 1] == 1)
                    cur++;
                else
                {
                    ans = max(ans, cur);
                    cur = 1;
                }
            }
        }
        return max(ans, cur);
    }
};
int main()
{
}