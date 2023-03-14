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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (head->next == NULL)
            return head;
        ListNode *ans = new ListNode(-1);
        ans->next = head;
        ListNode *cur = ans;
        for (int i = 1; i <= left - 1; i++)
            cur = cur->next;
        ListNode *temp = cur->next;
        cur->next = NULL;
        for (int i = 1; i <= right - left + 1; i++)
        {
            ListNode *tmp = new ListNode(temp->val);
            tmp->next = cur->next;
            cur->next = tmp;
            temp = temp->next;
        }
        cur = ans;
        while (cur->next != nullptr)
            cur = cur->next;
        if (temp != NULL)
            cur->next = temp;
        return ans->next;
    }
};