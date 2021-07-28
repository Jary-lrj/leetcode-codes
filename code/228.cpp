#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> ans;
        int i = 0, n = nums.size();
        while (i < n)
        {
            int low = i;
            i++;
            while (i < n && nums[i] - nums[i - 1] == 1)
                i++;
            int high = i - 1;
            string temp = to_string(nums[low]);
            if (low < high)
            {
                temp.append("->");
                temp.append(to_string(nums[high]));
            }
            ans.push_back(move(temp));
        }
        return ans;
    }
};
int main()
{
}