#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minStoneSum(vector<int> &piles, int k)
    {
        make_heap(piles.begin(), piles.end());
        for (int i = 0; i < k; i++)
        {
            pop_heap(piles.begin(), piles.end());
            piles.back() -= floor(piles.back() / 2);
            push_heap(piles.begin(), piles.end());
        }
        int sum = accumulate(piles.begin(), piles.end(), 0);
        return sum;
    }
};
int main()
{
}