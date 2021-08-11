#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string dict = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans = string();
        int index = 1;
        while (columnNumber > 26)
        {
            columnNumber--;
            ans.insert(0, 1, dict[columnNumber % 26]);
            columnNumber /= 26;
        }
        ans.insert(0, 1, dict[--columnNumber]);
        return ans;
    }
};
int main()
{
    return 0;
}