#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        int start = -2, end = 0;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target)
                right = mid - 1;
            else if (nums[mid] < target)
                left = mid + 1;
            else
            {
                start = mid, end = mid;
                while (start >= 0 && nums[start] == target)
                    start--;
                while (end < nums.size() && nums[end] == target)
                    end++;
                break;
            }
        }
        return {start + 1, end - 1};
    }
};
int main()
{
    return 0;
}