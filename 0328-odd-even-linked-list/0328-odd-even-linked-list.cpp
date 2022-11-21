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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL||head->next==NULL)return head;
        
        ListNode*odd=head,*even=head->next,*Preveven=head->next;
        
        while(odd!=NULL && even!=NULL && odd->next!=NULL&&even->next!=NULL){
            odd->next=even->next;odd=odd->next;
            even->next=odd->next;even=even->next;
            
            // if(odd!=NULL &&even!=nullptr)
            // {odd=odd->next;
            // even=even->next;}
        }
        odd->next=Preveven;
        return head;
    }
};