#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<string> ans;
    vector<int> segments;

public:
    void dfs(string &s, int segID, int segStart)
    {
        if (segID == 4)
        {
            if (segStart == s.size())
            {
                string ipAddr;
                for (int i = 0; i < 4; i++)
                {
                    ipAddr += to_string(segments[i]);
                    if (i != 3)
                        ipAddr += ".";
                }
                ans.push_back(move(ipAddr));
            }
            return;
        }
        if (segStart == s.size())
            return;
        if (s[segStart] == '0')
        {
            segments[segID] = 0;
            dfs(s, segID + 1, segStart + 1);
        }
        int addr = 0;
        for (int segEnd = segStart; segEnd < s.size(); segEnd++)
        {
            addr = addr * 10 + (s[segEnd] - '0');
            if (addr > 0 && addr <= 0xff)
            {
                segments[segID] = addr;
                dfs(s, segID + 1, segEnd + 1);
            }
            else
                break;
        }
    }
    vector<string> restoreIpAddresses(string s)
    {
        segments.resize(4);
        dfs(s,0,0);
        return ans;
    }
};
int main()
{
}