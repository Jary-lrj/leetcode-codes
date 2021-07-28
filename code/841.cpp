#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int num;
    vector<int> vis;
    void dfs(vector<vector<int>> &rooms, int id)
    {
        vis[id] = 1;
        num++;
        for (auto &it : rooms[id])
        {
            if (!vis[it])
                dfs(rooms, it);
        }
    }
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        int n = rooms.size();
        vis.resize(n);
        num = 0;
        dfs(rooms, 0);
        return num == n;
    }
};
int main()
{
}