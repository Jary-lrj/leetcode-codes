#include <bits/stdc++.h>
using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
class Solution {
public:
    bool isBadVersion(int n)
    {
        // The problem has defined for you.
    }
    int firstBadVersion(int n) {
        int left = 0,right = n - 1;
        int ans = 0;
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(isBadVersion(mid))
            {
                ans = mid;
                right = mid - 1 ;
            }
            else if(!(isBadVersion(mid)))
            {
                left = mid + 1 ;
            }
        }
        return left;
    }
};