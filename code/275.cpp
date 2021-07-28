#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        int len = citations.size();
        int left = 0, right = len - 1;
        int ans = 0;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (len - mid == citations[mid])
                ans = mid;
            else if (len - mid > citations[mid])
                left = mid + 1;
            else if (len - mid < citations[mid])
                right = mid - 1;
        }
        return left;
    }
};