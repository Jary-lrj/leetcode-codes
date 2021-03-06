#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int nthSuperUglyNumber(int n, vector<int> &primes)
    {
        unordered_set<int> seen;
        priority_queue<long, vector<long>, greater<long>> heap;
        seen.insert(1);
        heap.push(1);
        int ugly = 0;
        for (int i = 0; i < n; i++)
        {
            long curr = heap.top();
            heap.pop();
            ugly = (int)curr;
            for (int prime : primes)
            {
                long next = curr * prime;
                if (seen.insert(next).second)
                {
                    heap.push(next);
                }
            }
        }
        return ugly;
    }
};
int main()
{
    Solution s;
    vector<int> primes = {2, 3, 5};
    cout << s.nthSuperUglyNumber(7, primes) << endl;
    return 0;
}