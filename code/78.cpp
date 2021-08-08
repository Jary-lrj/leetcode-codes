#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> temp;
    vector<vector<int>> ans;

    void dfs(int index, vector<int> &nums)
    {
        if (index == nums.size())
        {
            ans.emplace_back(temp);
            return;
        }
        temp.emplace_back(nums[index]);
        dfs(index + 1, nums);
        temp.pop_back();
        dfs(index + 1, nums);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        dfs(0, nums);
        return ans;
    }
};

int main()
{
    return 0;
}