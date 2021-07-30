#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int sum = 0;
    int index = 0;
    int titleToNumber(string columnTitle)
    {
        for (int i = columnTitle.size() - 1; i >= 0; i--)
        {
            sum += (columnTitle[i] - 'A' + 1) * pow(26, index++);
        }
        return sum;
    }
};