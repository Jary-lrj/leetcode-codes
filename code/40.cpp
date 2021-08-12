#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> ans;
    vector<int> cur;
    void dfs(vector<vector<int>> &ans, vector<int> &cur, vector<int> &candidate, vector<bool> &used, int temp, int target, int index)
    {
        if(temp > target)
            return;
        if (temp == target)
        {
            ans.push_back(cur);
            return;
        }
        for (int i = index; i < candidate.size(); i++)
        {
            if (i > 0 && candidate[i] == candidate[i - 1] && used[i - 1] == false)
                continue;
            used[i] = true;
            cur.push_back(candidate[i]);
            dfs(ans, cur, candidate, used, temp + candidate[i], target, i + 1);
            cur.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<bool> used(candidates.size(), false);
        sort(candidates.begin(), candidates.end());
        dfs(ans, cur, candidates, used, 0, target, 0);
        return ans;
    }
};
int main()
{
    return 0;
}