#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPrefixString(string s, vector<string> &words)
    {
        string ans = "";
        for (int i = 0; i < words.size(); i++)
        {
            ans += words[i];
            if (ans == s)
                return true;
            else
                continue;
        }
        return false;
    }
};
int main()
{
    return 0;
}