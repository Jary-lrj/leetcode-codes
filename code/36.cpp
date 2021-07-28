#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        int num[11];
        int m = board.size(), n = board[0].size();
        for (int i = 0; i < m; i++)
        {
            memset(num, 0, sizeof(num));
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (!num[board[i][j] - '0'])
                        num[board[i][j] - '0']++;
                    else
                        return false;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            memset(num, 0, sizeof(num));
            for (int j = 0; j < n; j++)
            {
                if (board[j][i] == '.')
                    continue;
                else
                {
                    if (!num[board[j][i] - '0'])
                        num[board[j][i] - '0']++;
                    else
                        return false;
                }
            }
        }
        memset(num, 0, sizeof(num));
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (!num[board[i][j] - '0'])
                        num[board[i][j] - '0']++;
                    else
                        return false;
                }
            }
        }
        memset(num, 0, sizeof(num));
        for (int i = 3; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (!num[board[i][j] - '0'])
                        num[board[i][j] - '0']++;
                    else
                        return false;
                }
            }
        }
        memset(num, 0, sizeof(num));
        for (int i = 6; i < 9; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (!num[board[i][j] - '0'])
                        num[board[i][j] - '0']++;
                    else
                        return false;
                }
            }
        }
        memset(num, 0, sizeof(num));
        for (int i = 0; i < 3; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (!num[board[i][j] - '0'])
                        num[board[i][j] - '0']++;
                    else
                        return false;
                }
            }
        }
        memset(num, 0, sizeof(num));
        for (int i = 0; i < 3; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (!num[board[i][j] - '0'])
                        num[board[i][j] - '0']++;
                    else
                        return false;
                }
            }
        }
        memset(num, 0, sizeof(num));
        for (int i = 3; i < 6; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (!num[board[i][j] - '0'])
                        num[board[i][j] - '0']++;
                    else
                        return false;
                }
            }
        }
        memset(num, 0, sizeof(num));
        for (int i = 6; i < 9; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (!num[board[i][j] - '0'])
                        num[board[i][j] - '0']++;
                    else
                        return false;
                }
            }
        }
        memset(num, 0, sizeof(num));
        for (int i = 3; i < 6; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (!num[board[i][j] - '0'])
                        num[board[i][j] - '0']++;
                    else
                        return false;
                }
            }
        }
        memset(num, 0, sizeof(num));
        for (int i = 6; i < 9; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;
                else
                {
                    if (!num[board[i][j] - '0'])
                        num[board[i][j] - '0']++;
                    else
                        return false;
                }
            }
        }
        return true;
    }
};
int main()
{
}