#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSwaps(string s)
    {
        int left = 0, right = 0;
        for (auto c : s)
        {
            if (c == '[')
                left++;
            else if (left)
                left--;
            else
                right++;
        }
        if (right & 1)
            right++;
        return right >> 1;
    }
};
int main()
{
    return 0;
}