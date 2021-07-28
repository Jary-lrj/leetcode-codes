#include <bits/stdc++.h>
using namespace std;
/*
class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        int len = trust.size();
        bool flag = false;
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < len; i++)
        {
            cnt[trust[i][0]] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == 0)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            return -1;
        for (int i = 1; i <= n; i++)
        {
            cnt[i] = 0;
        }
        for (int i = 0; i < len; i++)
        {
            cnt[trust[i][1]]++;
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == n - 1)
                ans = cnt[i];
        }
        return ans;
    }
};
*/
class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        int cnt[n + 1];
        memset(cnt, 0, sizeof(int) * (n + 1));
        for (int i = 0; i < trust.size(); i++)
        {
            cnt[trust[i][0]]--;
            cnt[trust[i][1]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == n - 1)
                return i;
        }
        return -1;
    }
};