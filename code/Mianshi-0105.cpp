#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool oneEditAway(string first, string second)
    {
        int len1 = first.size(), len2 = second.size();
        if (len1 - len2 > 1 || len1 - len2 < -1)
            return 0;
        int count = 1;
        for (int i = 0, j = 0; i < len1, j < len2; i++, j++)
        {
            if (first[i] != second[j])
            {
                if (len1 - len2 == 1)
                {
                    j--;
                }
                else if (len2 - len1 == 1)
                {
                    i--;
                }
                count--;
            }
            if (count < 0)
                return false;
        }
        return true;
    }
};