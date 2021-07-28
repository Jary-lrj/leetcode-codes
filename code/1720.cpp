#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        vector<int> arr;
        arr.push_back(first);
        int i = 0;
        while (i != encoded.size() - 1)
        {
            arr.push_back(encoded[i] ^ arr.back());
            i++;
        }
        return arr;
    }
};
int main()
{
    int a = 6 ^ 3;
    cout << a << endl;
    return 0;
}