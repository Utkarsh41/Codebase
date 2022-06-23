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
    
    
    int getLen(ListNode* head){
        int len=0;
        ListNode* curr=head;
        while(curr!=NULL){
            ++len;
            curr=curr->next;
        }
        
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        
        
        int n=getLen(head);
        if(head==nullptr or head->next==nullptr or k==0 or k%n==0)return head;
        
        ListNode* crr=head;
        ListNode* prev=NULL;
        k%=n;
        int u=n-k;
        
        
        while(u--){
            prev=crr;
            crr=crr->next;
        }
        
        prev->next=nullptr;
        
        ListNode*temp=crr ;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        
        temp->next=head;
        
        return crr;
        
    }
};