#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        // Space: O(m + n)
        vector<int> lines;
        vector<int> rows;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    lines.push_back(i);
                    rows.push_back(j);
                }
            }
        }
        for (int i = 0; i < lines.size(); i++)
            for (int j = 0; j < matrix[0].size(); j++)
                matrix[lines[i]][j] = 0;

        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < rows.size(); j++)
                matrix[i][rows[j]] = 0;
        return;
    }
};
int main()
{
}