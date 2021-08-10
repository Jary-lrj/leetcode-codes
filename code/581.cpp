#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        if (is_sorted(nums.begin(), nums.end()))
            return 0;
        vector<int> copy = nums;
        sort(copy.begin(), copy.end());
        int left = 0, right = nums.size() - 1;
        while (copy[left] == nums[left])
            left++;
        while (copy[right] == nums[right])
            right--;
        return right - left + 1;
    }
};
int main()
{
    return 0;
}