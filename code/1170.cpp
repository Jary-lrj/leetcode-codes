#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mostCount(string &s)
    {
        int cnt[27];
        memset(cnt, 0, sizeof(cnt));
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
            cnt[s[i] - 'a']++;
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i])
                return cnt[i];
        }
        return 0;
    }
    vector<int> numSmallerByFrequency(vector<string> &queries, vector<string> &words)
    {
        int lenq = queries.size();
        int lenw = words.size();
        vector<int> ans(lenq, 0);
        vector<int> que_time;
        vector<int> words_time;
        for (auto &q : queries)
            que_time.push_back(mostCount(q));
        for (auto &s : words)
            words_time.push_back(mostCount(s));
        sort(words_time.begin(), words_time.end());
        for (int i = 0; i < lenq; i++)
        {
            int lowEst, left = 0, right = lenw - 1;
            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (que_time[i] == words_time[mid])
                    left = mid + 1;
                else if (que_time[i] < words_time[mid])
                {
                    right = mid - 1;
                }
                else if (que_time[i] > words_time[mid])
                    left = mid + 1;
                ans[i] = lenw - left + 1;
            }
            return ans;
        }
    }
};
int main()
{
}