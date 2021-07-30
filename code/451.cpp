#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> freq;
        for (auto ch : s)
        {
            freq[ch]++;
        }
        sort(s.begin(), s.end(), [&](const char &a, const char &b)
             { return freq[a] == freq[b] ? a > b : freq[a] > freq[b]; });
        return s;
    }
};