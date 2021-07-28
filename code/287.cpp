#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int len = nums.size();
        vector<int> bucket(len + 1, 0);
        for (auto num : nums)
        {
            bucket[num]++;
            if (bucket[num] > 1)
                return num;
        }
        return -1;
    }
};