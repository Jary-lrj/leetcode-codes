#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool find132pattern(vector<int> &nums)
    {
        int len = nums.size();
        if (len < 3)
            return false;
        int l = 0, r = len - 1;
        while (l < r)
        {
            if (nums[l] >= nums[r])
                l++;
            int mid = l + (r - l) / 2;
            if(nums[mid]>nums[r])
                return true;
            else if(nums[mid]<=nums[r])
                
        }
    }
};
int main()
{
}