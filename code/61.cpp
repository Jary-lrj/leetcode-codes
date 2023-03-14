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
    ListNode *rotateRight(ListNode *head, int k)
    {
        ListNode *p = head;
        int len = 0;
        while (p != nullptr)
        {
            len++;
            p = p->next;
        }
        if (len == 0)
            return nullptr;
        if (len == 1)
            return head;
        int dist = k % len;
        p = head;
        for (int i = 0; i < len - dist - 1; i++)
        {
            p = p->next;
        }
        if (p->next == nullptr)
            return head;
        ListNode *newnode = p->next;
        p->next = nullptr;
        ListNode *tmp = newnode;
        while (tmp->next != nullptr)
        {
            tmp = tmp->next;
        }
        tmp->next = head;
        return newnode;
    }
};