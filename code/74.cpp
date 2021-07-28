#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = m * n - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (matrix[mid / n][mid % n] == target)
                return target;
            else if (matrix[mid / n][mid % n] < target)
                left = mid + 1;
            else if (matrix[mid / n][mid % n] > target)
                right = mid - 1;
        }
        return -1;
    }
};