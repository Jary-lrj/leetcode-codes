#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (mid % 2)
                mid--;
            if (nums[mid] == nums[mid + 1])
                left = mid + 2;
            else
                right = mid - 1;
        }
        return nums[left];
    }
};