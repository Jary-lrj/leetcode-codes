#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        int spinLoc = max_element(nums.begin(), nums.end()) - nums.begin();
        if (spinLoc == nums.size() - 1)
        {
            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (nums[mid] == target)
                    return mid;
                else if (nums[mid] < target)
                    left = mid + 1;
                else if (nums[mid] > target)
                    right = mid - 1;
            }
        }
        else
        {
            sort(nums.begin(), nums.end());
            int len = nums.size();
            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (nums[mid] == target)
                    return (mid + spinLoc + 1) % len;
                else if (nums[mid] < target)
                    left = mid + 1;
                else if (nums[mid] > target)
                    right = mid - 1;
            }
        }
        return -1;
    }
};
int main()
{
}