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
class Solution1 {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode*s=head,*f=head;
        int l=0;
        ListNode*curr=head;
        while(curr){
            ++l;
            curr=curr->next;
        }
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        return l&1?s:s->next;
        // return s->next;/
        
    }
};
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        
        ListNode*s=head,*f=head->next;
       
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        return s->next;
        // return s->next;/
        
    }
};