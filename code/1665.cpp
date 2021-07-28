#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumEffort(vector<vector<int>> &tasks)
    {
        int len = tasks.size();
        sort(tasks.begin(), tasks.end(), [&](vector<int> &v1, vector<int> &v2) { return v1[1] - v1[0] < v2[1] - v2[0]; });
        int res = 0;
        for (const auto &task : tasks)
        {
            res = max(res + task[0], task[1]);
        }
        return res;
    }
};