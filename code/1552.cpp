#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool check(int x, vector<int> &position, int m)
    {
        int pre = position[0], cnt = 1;
        for (int i = 1; i < position.size(); i++)
        {
            if (position[i] - pre >= x)
            {
                pre = position[i];
                cnt++;
            }
        }
        return cnt >= m;
    }
    int maxDistance(vector<int> &position, int m)
    {
        sort(position.begin(), position.end());
        int left = 0, right = position.back() - position[0];
        int ans = 0;
        while (left <= right)
        {
            int mid = (left + right) >> 1;
            if (check(mid, position, m))
            {
                ans = mid;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        return ans;
    }
};
int main()
{
}