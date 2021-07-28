#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<vector<int>> ans;
    vector<int> curPermute;

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        int len = nums.size();
        vector<bool> used(len + 1, 0);
        dfs(ans, curPermute, nums, used, 0);
        return ans;
    }
    void dfs(vector<vector<int>> &ans, vector<int> &curPermute, vector<int> &nums, vector<bool> &used, int index)
    {
        if (index == nums.size())
        {
            ans.push_back(curPermute);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!used[i])
            {
                curPermute.push_back(nums[i]);
                used[i] = 1;
                dfs(ans, curPermute, nums, used, index + 1);
                curPermute.pop_back();
                used[i] = 0;
            }
        }
    }
};
int main()
{
}