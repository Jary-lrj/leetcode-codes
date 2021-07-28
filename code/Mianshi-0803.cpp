#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int binarySearch(vector<int> &arr, int left, int right)
    {
        if (left > right)
            return -1;
        int mid = (left + right) >> 1;
        int leftAnswer = binarySearch(arr, left, mid - 1);
        if (leftAnswer != -1)
            return leftAnswer;
        else if (arr[mid] == mid)
            return mid;
        return binarySearch(arr, mid + 1, right);
    }
    int findMagicIndex(vector<int> &nums)
    {
        return binarySearch(nums, 0, (int)nums.size() - 1);
    }
};