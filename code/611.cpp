#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int triangleNumber(vector<int> &nums)
    {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int left = j + 1, right = n - 1, k = j;
                while (left <= right)
                {
                    int mid = (left + right) / 2;
                    if (nums[mid] < nums[i] + nums[j])
                    {
                        k = mid;
                        left = mid + 1;
                    }
                    else
                    {
                        right = mid - 1;
                    }
                }
                ans += k - j;
            }
        }
        return ans;
    }
};