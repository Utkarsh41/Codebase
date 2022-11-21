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
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL || head->next==NULL)return head;
        
        // while(head->next!=NULL && head->val==head->next->val){
        //     head=head->next;
        // }
        
        ListNode*curr=head;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->val==curr->next->val){
                curr->next=curr->next->next;
            }
            else{
            curr=curr->next;}
        }
        
    return head;
        // return head;
        
    }
};