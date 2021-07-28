#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestStrChain(vector<string> &words)
    {
        sort(words.begin(), words.end(), [&](const string &a, const string &b) { return a.length() < b.length(); });
        int len = words.size();
        vector<int> dp(len + 1, 0);
        for (int i = 0; i < len; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (StrCompare(words[i], words[j]))
                    dp[j] = max(dp[i] + 1, dp[j]);
            }
        }
        int res = 0;
        for (auto i : dp)
            res = max(res, i);
        return res + 1;
    }
    bool StrCompare(string a, string b)
    {
        int len1 = a.size(), len2 = b.size();
        int flag = 0;
        if (len2 - len1 != 1)
            return false;
        int i = 0, j = 0;
        while (i < len1 && j < len2)
        {
            if (a[i] == b[j])
            {
                i++;
                j++;
            }
            else
            {
                flag++;
                j++;
                if (flag > 1)
                    return false;
            }
        }
        return true;
    }
};
int main()
{
}