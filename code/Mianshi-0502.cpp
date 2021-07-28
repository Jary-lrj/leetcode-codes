#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string printBin(double num)
    {
        int bit[32];
        string ans = "0.";
        bool flag = false;
        memset(bit, 0, sizeof(bit));
        double base = 0.0;
        for (int i = 1; i <= 32; i++)
        {
            base = base + pow(0.5, i);
            if (base < num)
            {
                bit[i - 1] = 1;
                ans += to_string(bit[i - 1]);
            }
            else if (base == num)
            {
                bit[i - 1] = 1;
                ans += to_string(bit[i - 1]);
                flag = true;
                break;
            }
            else
            {
                bit[i - 1] = 0;
                ans += to_string(bit[i - 1]);
                base = base - pow(0.5, i);
            }
        }
        return (flag == true) ? ans : "ERROR";
    }
};