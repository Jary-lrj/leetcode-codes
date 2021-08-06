#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string getHint(string secret, string guess)
    {
        vector<int> cnt(10, 0);
        int cntA = 0, cntB = 0;
        string ans = "";
        for (int i = 0; i < secret.size(); i++)
        {
            cnt[secret[i] - '0']++;
        }
        for (int i = 0; i < secret.size(); i++)
        {
            if (secret[i] == guess[i])
            {
                cntA++;
                cnt[secret[i] - '0']--;
            }
            else
                continue;
        }
        for (int i = 0; i < secret.size(); i++)
        {
            if (secret[i] == guess[i])
                continue;
            else if (secret[i] != guess[i])
            {
                if (cnt[guess[i] - '0'] > 0)
                {
                    cntB++;
                    cnt[guess[i] - '0']--;
                }
                else
                    continue;
            }
        }
        ans += to_string(cntA);
        ans += 'A';
        ans += to_string(cntB);
        ans += 'B';
        return ans;
    }
};
int main()
{
    Solution s;
    s.getHint("1234", "2341");
    return 0;
}