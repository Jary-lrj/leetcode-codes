#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<bool> canEat(vector<int> &candiesCount, vector<vector<int>> &queries)
    {
        int len = candiesCount.size();
        vector<long long> prefix(len + 1, 0);
        vector<bool> ans(queries.size(), true);
        prefix[0] = candiesCount[0];
        for (int i = 1; i < len; i++)
        {
            prefix[i] = prefix[i - 1] + candiesCount[i];
        }
        for (int i = 0; i < queries.size(); i++)
        {
            int type = queries[i][0], day = queries[i][1], eat = queries[i][2];
            if (day >= prefix[type])
            {
                ans[i] = false;
                continue;
            }
            long long num = (day + 1LL) * eat;
            if (num <= type ? prefix[type - 1] : 0)
                ans[i] = false;
        }
        return ans;
    }
};
int main()
{
}