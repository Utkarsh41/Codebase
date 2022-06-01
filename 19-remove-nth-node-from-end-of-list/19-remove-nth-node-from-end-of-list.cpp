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
    ListNode* removeNthFromEnd(ListNode* head, int n) {            
            
            
        
         if(n==1 && head->next==nullptr){
            return nullptr;
        }
        
        int len = 0;
        ListNode*curr=head;
        while(curr!=NULL){
            ++len;
            curr=curr->next;
        }
       
        curr=head;
        int i=1;
        while(i<len-n){
           
            curr=curr->next;
            
            i++;
        }
        
        if(n==len){
            head=curr->next;
        }
        else if(curr->next->next ==NULL){
            curr->next=NULL;
        }
        else{
            curr->next=curr->next->next;
        }
        
        return head;
    }
};