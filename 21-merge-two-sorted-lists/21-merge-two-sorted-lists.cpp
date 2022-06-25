/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
         if (a == NULL)
        return b;
    if (b == NULL)
        return a;

    ListNode *head = NULL, *tail = NULL;
    if (a->val < b->val)
    {
        head = a;
        tail=head;
        a = a->next;
    }
    else
    {
        head  = b;
        tail=head;
        b = b->next;
    }

    while (a != NULL && b != NULL)
    {
        if (a->val <= b->val)
        {
            tail->next = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            b = b->next;
        }
        tail=tail->next;
    }

    if (a == nullptr)
        tail->next = b;
    else
        tail->next = a;

    return head;
    }
};