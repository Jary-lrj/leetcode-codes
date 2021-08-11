#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> index_cnt;
        for (int i = 0; i < nums.size(); i++)
        {
            if (index_cnt.count(nums[i]))
            {
                if (i - index_cnt[nums[i]] <= k)
                    return true;
            }
            index_cnt[nums[i]] = i;
        }
        return false;
    }
};