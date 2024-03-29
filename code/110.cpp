#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    bool isBalanced(TreeNode *root)
    {
        if (root == nullptr)
            return true;
        else
            return abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
    int height(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        return max(height(root->left), height(root->right)) + 1;
    }
};