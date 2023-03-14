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
    TreeNode *p;
    void flatten(TreeNode *root)
    {
        if (!root)
            return;
        p = root;
        TreeNode *left = root->left, *right = root->right;
        root->left = NULL;
        flatten_copy(left);
        flatten_copy(right);
    }
    void flatten_copy(TreeNode *root)
    {
        if (!root)
            return;
        TreeNode *newNode = new TreeNode(root->val);
        p->right = newNode;
        p = newNode;
        flatten_copy(root->left);
        flatten_copy(root->right);
    }
};