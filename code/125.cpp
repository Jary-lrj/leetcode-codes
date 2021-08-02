#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string ans = "";
    bool isPalindrome(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                ans += char(s[i] + 32);
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
                ans += s[i];
            else if (s[i] >= '0' && s[i] <= '9')
                ans += s[i];
            else
                continue;
        }
        string temp = ans;
        reverse(ans.begin(), ans.end());
        if (temp == ans)
            return true;
        else
            return false;
    }
};
int main()
{
    Solution s;
    s.isPalindrome("wo ri ni ma");
    return 0;
}