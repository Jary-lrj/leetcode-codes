#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int n0 = 0, n1 = 0;
        while (n)
        {
            if (n & 1)
            {
                n1++;
                n >>= 1;
            }
            else if (!(n & 1))
            {

                n0++;
                n >>= 1;
            }
        }
        if (n1 == 1)
            return true;
        else
            return false;
    }
};
int main()
{
}