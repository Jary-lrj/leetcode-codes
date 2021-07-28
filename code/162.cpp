#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return 0;
        }
        int left = 0, right = nums.size() - 2;
        while (left <= right)
        {
            int mid = left + ((right - left) / 2);
            if (nums[mid] > nums[mid + 1])
            {
                right = mid - 1;
            }
            else if (nums[mid] < nums[mid + 1])
            {
                left = mid + 1;
            }
        }
        return left;
    }
};