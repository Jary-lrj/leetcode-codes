#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int left = 1;//
        int right = *max_element(piles.begin(), piles.end());
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int hours = 0;
            for (auto &p : piles)
            {
                hours += (p - 1) / mid + 1;
            }
            if (hours <= h)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }
};