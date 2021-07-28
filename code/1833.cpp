#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        sort(costs.begin(), costs.end());
        int ans = 0;
        int money = coins;
        for (int i = 0; i < costs.size(); i++)
        {
            if (money - costs[i] >= 0)
            {
                ans = 0;
                money -= costs[i];
            }
            else
                break;
        }
        return ans;
    }
};