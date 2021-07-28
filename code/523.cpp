#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        int len = nums.size();
        if (len < 2)
            return false;
        unordered_map<int, int> p;
        p[0] = -1;
        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            sum = (sum + nums[i]) % k;
            if (p.count(sum))
            {
                int preIndex = p[sum];
                if (i - preIndex >= 2)
                    return true;
            }
            else
                p[sum] = i;
        }
        return false;
    }
};
int main()
{
}