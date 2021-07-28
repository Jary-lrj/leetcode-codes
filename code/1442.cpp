#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countTriplets(vector<int> &arr)
    {
        if (arr.size() < 3)
            return 0;
        vector<int> dp(arr.size() + 1);
        for (int i = 0; i < arr.size(); i++)
            dp[i + 1] = dp[i] ^ arr[i];
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                for (int k = j; k < arr.size(); k++)
                {
                    if (dp[i] == dp[k + 1])
                    ans++;
                }
            }
        }
        return ans;
    }
};