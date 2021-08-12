#include <bits/stdc++.h>
using namespace std;
class Solution
{
// public:
//     char opt[4] = {'+', '-', '*', '/'};
//     bool flag = false;
//     double MIN = 1e-6;
//     void dfs(vector<double> &nums)
//     {
//         if (flag)
//             return;
//         else if (nums.size() == 1)
//         {
//             if (abs(nums[0] - 24.0) < MIN)
//             {
//                 flag = true;
//                 return;
//             }
//             return;
//         }
//         for (int i = 0; i < 4; i++)
//         {
//             for (int j = 0; j < 4; j++)
//             {
//                 if (i == j)
//                     continue;
//                 vector<double> cur;
//                 for (int k = 0; k < 4; k++)
//                 {
//                     if (k != i && k != j)
//                         cur.emplace_back(nums[k]);
//                 }
//                 for (auto &c : opt)
//                 {
//                     if (c == '+')
//                         cur.emplace_back(nums[i] + nums[j]);
//                     else if (c == '-')
//                         cur.emplace_back(nums[i] - nums[j]);
//                     else if (c == '*')
//                         cur.emplace_back(nums[i] * nums[j]);
//                     else if (c == '/')
//                         cur.emplace_back(nums[i] / nums[j]);
//                 }
//                 dfs(cur);
//                 cur.pop_back();
//                 if (flag)
//                     return;
//             }
//         }
//     }
//     bool judgePoint24(vector<int> &cards)
//     {
//         vector<double> nums;
//         for (auto &card : cards)
//         {
//             nums.emplace_back(double(card));
//         }
//         dfs(nums);
//         return flag;
//     }
};