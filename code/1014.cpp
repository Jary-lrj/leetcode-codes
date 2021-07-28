#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxScoreSightseeingPair(vector<int> &values)
    {
        int len = values.size();
        vector<int> dp(len + 1, 0);
        int ans = 0, cur = values[0] + 0;
        for (int i = 1; i < len; i++)
        {
            ans = max(ans, values[i] - i + cur);
            cur = max(cur, values[i] + i);
        }
        return ans;
    }
};
int main()
{
}