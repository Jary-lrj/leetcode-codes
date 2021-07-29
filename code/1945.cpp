#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    int dict[127];
    string temp="";
    int sum = 0;
    int getLucky(string s, int k)
    {
        for (int i = 97; i <= 122; i++)
        {
            dict[i] = i - 96;
        }
        for (int i = 0; i < s.size(); i++)
        {
            temp += to_string(dict[s[i]]);
        }
        for (int i = 0; i < k - 1; i++)
        {
            sum = 0;
            for (int j = 0; j < temp.size(); j++)
            {
                sum += temp[j] - '0';
            }
            temp = to_string(sum);
        }
        return sum;
    }
};