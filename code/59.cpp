#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int left = 0, right = n - 1, top = 0, bottom = n - 1;
        int start = 1, end = n * n;
        while (start <= end)
        {
            for (int i = left; i <= right; i++)
                matrix[top][i] = start++;
            top++;
            for (int i = top; i <= bottom; i++)
                matrix[i][right] = start++;
            right--;
            for (int i = right; i >= left; i--)
                matrix[bottom][i] = start++;
            bottom--;
            for (int i = bottom; i >= top; i--)
                matrix[i][left] = start++;
            left++;
        }
        return matrix;
    }
};
int main()
{
    return 0;
}