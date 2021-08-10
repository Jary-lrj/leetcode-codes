#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
        return;
    }
    void moveZeroes(vector<int> &nums)
    {
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = i; j < len - i - 1; j++)
            {
                if (nums[j] == 0)
                    swap(nums[j], nums[j + 1]);
                else
                    continue;
            }
        }
        return;
    }
};
int main()
{
    return 0;
}