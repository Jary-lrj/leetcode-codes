#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        sort(citations.begin(), citations.end());
        int h = 0;
        int len = citations.size();
        while (h < len && citations[len - h - 1] > h)
            h++;
        return h;
    }
};