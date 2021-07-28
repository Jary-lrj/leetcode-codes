#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        int last[27];
        memset(last, 0, sizeof(last));
        vector<int> ans;
        for (int i = 0; i < s.length(); i++)
        {
            last[s[i] - 'a'] = i;
        }
        int start = 0, end = 0;
        for (int i = 0; i < s.length(); i++)
        {

            end = max(end, last[s[i] - 'a']);
            if (i == end)
            {
                ans.push_back(end - start + 1);
                start = end + 1;
            }
        }
        return ans;
    }
};
int main()
{
}