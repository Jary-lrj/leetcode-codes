#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void dfs(vector<vector<int>> &ans, vector<int> &cur, int n, int k, int index)
    {
        if (cur.size() == k)
        {
            ans.emplace_back(cur);
            return;
        }
        for (int i = index; i <= n; i++)
        {
            cur.emplace_back(i);
            dfs(ans, cur, n, k, i + 1);
            cur.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> ans;
        vector<int> cur;
        dfs(ans, cur, n, k, 1);
        return ans;
    }
};

int main()
{
    return 0;
}