#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<double> nums;
        for (auto &num1 : nums1)
            nums.push_back(num1);
        for (auto &num2 : nums2)
            nums.push_back(num2);
        sort(nums.begin(), nums.end());
        if (nums.size() & 1)
            return nums[nums.size() / 2];
        else if (!(nums.size() & 1))
            return (nums[(nums.size() - 1) / 2] + nums[(nums.size() - 1) / 2 + 1]) / 2.0;
    }
};