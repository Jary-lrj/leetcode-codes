#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool xorGame(vector<int> &nums)
    {
        if (nums.size() % 2 == 0)
            return true;
        int xorsum = 0;
        for (auto &num : nums)
        {
            xorsum ^= num;
        }
        if(xorsum)
            return false;
        else
            return true;
    }
};
