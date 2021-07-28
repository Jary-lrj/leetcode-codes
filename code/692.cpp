#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> Freq;
        for (auto &word : words)
        {
            Freq[word]++;
        }
        auto cmp = [](const pair<string, int> &a, const pair<string, int> &b) {
            return a.second == b.second ? a.first < b.first : a.second > b.second;
        };
        priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(cmp)> que(cmp);
        for (auto &it : Freq)
        {
            que.emplace(it);
            if (que.size() > k)
                que.pop();
        }
        vector<string> res(k);
        for(int i=k-1;i>=0;i--)
        {
            res[i]=que.top().first;
            que.pop();
        }
        return res;
    }
};
int main()
{
}