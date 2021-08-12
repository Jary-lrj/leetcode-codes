#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> cur;
    vector<vector<int>> ans;

    void dfs(vector<vector<int>> &ans, vector<int> &cur, vector<int> &nums, vector<bool> &used, int index)
    {
        ans.push_back(cur);
        for (int i = index; i < nums.size(); i++)
        {
            if (i > 0 && used[i - 1] == false && nums[i - 1] == nums[i])
                continue;
            cur.push_back(nums[i]);
            used[i] = true;
            dfs(ans, cur, nums, used, i + 1);
            used[i] = false;
            cur.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        dfs(ans, cur, nums, used, 0);
        return ans;
    }
};