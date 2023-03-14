#include <bits/stdc++.h>
using namespace std;
// Definition for a Node.
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution
{
private:
    queue<Node *> qu;

public:
    Node *connect(Node *root)
    {
        if (root == nullptr)
            return nullptr;
        qu.push(root);
        while (!qu.empty())
        {
            int size = qu.size();
            for (int i = 0; i < size; i++)
            {
                Node *front = qu.front();
                qu.pop();
                if (i < size - 1)
                    front->next = qu.front();
                if (front->left != nullptr)
                    qu.push(front->left);
                if (front->right != nullptr)
                    qu.push(front->right);
            }
        }
        return root;
    }
};