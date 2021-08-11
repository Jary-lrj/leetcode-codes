#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool containsNearbyAlmostDuplicate(vector<int> &nums, int k, int t)
    {
        unordered_map<int, int> index;
        for (int i = 0; i < nums.size(); i++)
        {
            if (index.count(nums[i]))
            {
                if (abs(i - index[nums[i]]) <= k && abs(nums[i] - nums[index[nums[i]]]) <= t)
                    return true;
            }
            index[nums[i]] = i;
        }
        return false;
    }
};