#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    unordered_map<char, int> ori, cnt;
    bool check()
    {
        for (const auto &p : ori)
        {
            if (cnt[p.first] < p.second)
                return false;
        }
        return true;
    }
    string minWindow(string s, string t)
    {
        for (const auto &c : t)
        {
            ori[c]++;
        }
        int left = 0, right = -1;
        int len = INT_MAX, ansl = -1, ansr = -1;
        while (right < (int)s.size())
        {
            if (ori.find(s[++right]) != ori.end())
                cnt[s[right]]++;
            while (check() && left <= right)
            {
                if (right - left + 1 < len)
                {
                    len = right - left + 1;
                    ansl = left;
                }
                if (ori.find(s[left]) != ori.end())
                {
                    --cnt[s[left]];
                }
                left++;
            }
        }
        return ansl == -1 ? string() : s.substr(ansl, len);
    }
};