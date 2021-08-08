#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void dfs(vector<int> &candidates, int target, vector<int> &combined, vector<vector<int>> &ans, int index)
    {
        if (index == candidates.size())
            return;
        if (target == 0)
        {
            ans.emplace_back(combined);
            return;
        }
        dfs(candidates, target, combined, ans, index + 1);
        if (target - candidates[index] >= 0)
        {
            combined.emplace_back(candidates[index]);
            dfs(candidates, target - candidates[index], combined, ans, index);
            combined.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> combine;
        dfs(candidates, target, combine, ans, 0);
        return ans;
    }
};

int main()
{
    return 0;
}