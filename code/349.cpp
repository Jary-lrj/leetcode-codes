#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        int len1 = nums1.size(), len2 = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        int index1 = 0, index2 = 0;
        while (index1 < len1 && index2 < len2)
        {
            if (nums1[index1] == nums2[index2])
            {
                if (!ans.size() || ans.back() != nums1[index1])
                    ans.push_back(nums1[index1]);
                index1++;
                index2++;
            }
            else if (nums1[index1] < nums2[index2])
                index1++;
            else if (nums1[index1] > nums2[index2])
                index2++;
        }
        return ans;
    }
};