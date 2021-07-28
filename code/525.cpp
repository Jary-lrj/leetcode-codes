#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        int ans = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            if (num == 1)
                count++;
            else
                count--;
            if (mp.count(count))
            {
                int index = mp[count];
                ans = max(ans, i - index);
            }
            else
                mp[count] = i;
        }
        return ans;
    }
};
int main()
{
}