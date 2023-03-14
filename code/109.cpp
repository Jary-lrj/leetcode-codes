#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
    ListNode *getMidPos(ListNode *left, ListNode *right)
    {
        ListNode *slow = left, *fast = left;
        while (fast != right && fast->next != right)
        {
            fast = fast->next;
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
    TreeNode *sortedListToBST(ListNode *head)
    {
        return getBST(head, NULL);
    }
    TreeNode *getBST(ListNode *left, ListNode *right)
    {
        if (left == right)
            return NULL;
        ListNode *mid = getMidPos(left, right);
        TreeNode *root = new TreeNode(mid->val);
        root->left = getBST(left, mid);
        root->right = getBST(mid->next, right);
        return root;
    }
};