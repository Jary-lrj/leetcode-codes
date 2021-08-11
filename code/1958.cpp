#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkMove(vector<vector<char>> &board, int rMove, int cMove, char color)
    {
        auto check = [&](int dx, int dy) -> bool
        {
            int x = rMove + dx, y = cMove + dy;
            int step = 1;
            while (x >= 0 && x < 8 && y >= 0 && y < 8)
            {
                if (step == 1)
                {
                    if (board[x][y] == '.' || board[x][y] == color)
                    {
                        return false;
                    }
                }
                else
                {
                    if (board[x][y] == '.')
                        return false;
                    if (board[x][y] == color)
                        return true;
                }
                step++;
                x += dx;
                y += dy;
            }
            return false;
        };
        vector<int> dx = {1, 1, 0, -1, -1, -1, 0, 1};
        vector<int> dy = {0, 1, 1, 1, 0, -1, -1, -1};
        for (int i = 0; i < 8; i++)
        {
            if (check(dx[i], dy[i]))
                return true;
        }
        return false;
    }
};
int main()
{
    return 0;
}