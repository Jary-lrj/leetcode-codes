#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        priority_queue<int, vector<int>, greater<int>> que;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
                que.push(matrix[i][j]);
        }
        for (int n = k - 1; n > 0; n--)
            que.pop();
        return que.top();
    }
};
int main()
{

}