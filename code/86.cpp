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
class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {
        if (!head)
            return NULL;
        ListNode *cur = head;
        ListNode *ans = new ListNode(-1), *tmp = ans;
        ans->next = NULL;
        while (cur != nullptr)
        {
            if (cur->val < x)
            {
                tmp->next = new ListNode(cur->val);
                tmp = tmp->next;
            }
            cur = cur->next;
        }
        cur = head;
        while (cur != nullptr)
        {
            if (cur->val >= x)
            {
                tmp->next = new ListNode(cur->val);
                tmp = tmp->next;
            }
            cur = cur->next;
        }
        return ans->next;
    }
};