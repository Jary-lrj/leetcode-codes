#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        vector<int> res;
        int len = num.size();
        for (int i = len - 1; i >= 0; i--)
        {
            int sum = num[i] + k % 10;
            k /= 10;
            if (sum >= 10)
            {
                k++;
                sum -= 10;
            }
            res.push_back(sum);
        }
        for (; k > 0; k /= 10)
        {
            res.push_back(k % 10);
        }
        reverse(res.begin(), res.end());
    }
};
int main()
{
}