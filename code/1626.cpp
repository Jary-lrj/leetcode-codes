#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int bestTeamScore(vector<int> &scores, vector<int> &ages)
    {
        int len = ages.size();
        vector<int> dp(len + 1);
        vector<pair<int, int>> sport;
        for (int i = 0; i < len; i++)
        {
            sport.push_back({ages[i], scores[i]});
        }
        sort(sport.begin(), sport.end());
        for (int i = 0; i < len; i++)
        {
            dp[i] = sport[i].second;
            for (int j = 0; j < i; j++)
            {
                if (sport[j].second <= sport[i].second)
                    dp[i] = max(dp[i], dp[j] + sport[i].second);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};
int main()
{
}