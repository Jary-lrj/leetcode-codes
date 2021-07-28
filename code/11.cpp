#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int ans = 0;
        int left = 0, right = height.size() - 1;
        while (left < right)
        {
            int temp = (right - left) * min(height[left], height[right]);
            ans = max(ans, temp);
            if (height[left] <= height[right])
                left++;
            else
                right--;
        }
        return ans;
    }
};