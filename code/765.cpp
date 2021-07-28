#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSwapsCouples(vector<int> &row)
    {
        int len = row.size();
        int ans = 0;
        for (int i = 0; i < len - 1; i += 2)
        {
            if (row[i] == (row[i + 1] ^ 1))
                continue;
            for (int j = i + 1; j < len; j++)
            {
                if (row[j] == (row[i] ^ 1))
                {
                    row[j] ^= row[i + 1];
                    row[i + 1] ^= row[j];
                    row[j] ^= row[i + 1];
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
int main()
{
}