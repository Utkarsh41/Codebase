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
    
    
    ListNode*answer(ListNode* &head,bool &ut){
        if(head==NULL)return head;
        
        ListNode*curr=head;
        int sm=0;
        
        while(curr!=NULL){
            sm=sm+curr->val;
            if(sm==0)break;
            curr=curr->next;    
        }
        
        if(sm==0){
            ut=true;
            return curr->next;
        }
        
//         Solve krdo next node ke liye
        head->next =answer(head->next,ut);
        
        return head;
        
        
        
        
    }
    ListNode* removeZeroSumSublists(ListNode* head) {
        
        
        while(true){
            bool ut=false;
            head=answer(head,ut);
            
            if(head==NULL || ut==false)break;
        }
        return head;
        
    }
};