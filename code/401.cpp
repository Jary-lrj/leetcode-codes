#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> readBinaryWatch(int turnedOn)
    {
        vector<string> ans;
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 60; j++)
            {
                if (countBinary1(i) + countBinary1(j) == turnedOn)
                    ans.push_back(to_string(i) + ":" + (j < 10 ? "0" + to_string(j) : to_string(j)));
            }
        }
        return ans;
    }
    int countBinary1(int n)
    {
        int res = 0;
        while (n)
        {
            res += (n & 1 == 0 ? 0 : 1);
            n >>= 1;
        }
        return res;
    }
};
int main()
{
}