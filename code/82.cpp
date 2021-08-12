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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *dummy = new ListNode(0, head);
        unordered_map<int, int> cnt;
        ListNode *cur = dummy;
        while (cur->next)
        {
            cnt[cur->next->val]++;
            cur->next = cur->next->next;
        }
        cur = dummy;
        while (cur)
        {
            if (cnt[cur->next->val] >= 2)
                cur->next = cur->next->next;
            else
                cur = cur->next;
        }
        return dummy->next;
    }
};