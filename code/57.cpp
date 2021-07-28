#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for (int i = 0; i < intervals.size(); i++)
        {
            int left = intervals[i][0], right = intervals[i][1];
            if (!ans.size() || ans.back()[1] < left)
                ans.push_back({left, right});
            else
                ans.back()[1] = max(ans.back()[1], right);
        }
        return ans;
    }
};
int main()
{
}