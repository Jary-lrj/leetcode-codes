#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // vector<vector<int>> ans;
    // vector<int> cur;
    // int sum = 0;
    // void dfs(vector<vector<int>> &ans, vector<int> &cur, vector<int> &nums, int target, int index)
    // {
    //     if (cur.size() == 3)
    //     {
    //         if (target == 0)
    //         {
    //             ans.push_back(cur);
    //             return;
    //         }
    //         else
    //             return;
    //     }
    //     for (int i = index; i < nums.size(); i++)
    //     {
    //         cur.push_back(nums[i]);
    //         dfs(ans, cur, nums, target + nums[i], i + 1);
    //         cur.pop_back();
    //     }
    // }
    // vector<vector<int>> threeSum(vector<int> &nums)
    // {
    //     sort(nums.begin(), nums.end());
    //     dfs(ans, cur, nums, 0, 0);
    //     sort(ans.begin(), ans.end());
    //     ans.erase(unique(ans.begin(), ans.end()), ans.end());
    //     return ans;
    // }
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int len = nums.size();
        for (int a = 0; a < len; a++)
        {
            if (a > 0 && nums[a] == nums[a - 1])
                continue;
            int c = len - 1;
            int target = -nums[a];
            for (int b = a + 1; b < len; b++)
            {
                if (b > a + 1 && nums[b] == nums[b - 1])
                    continue;
                while (b < c && nums[b] + nums[c] > target)
                {
                    c--;
                }
                if (b == c)
                    break;
                if (nums[b] + nums[c] == target)
                    ans.push_back({nums[a], nums[b], nums[c]});
            }
        }
        return ans;
    }
};
int main()
{
}