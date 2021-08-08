#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int tribonacci(int n)
    {
        int tri[38];
        memset(tri, 0, sizeof(tri));
        tri[0] = 0, tri[1] = 1, tri[2] = 1;
        for (int i = 3; i <= 37; i++)
        {
            tri[i] = tri[i - 1] + tri[i - 2] + tri[i - 3];
        }
        return tri[n];
    }
};

int main()
{
    return 0;
}