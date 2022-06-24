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
            ListNode*str= new ListNode();
        str->next=head;
        ListNode*s=str,*f=str;
        
        for(int i=1;i<=n;i++){
            f=f->next;
        }
        
        while(f->next!=NULL){
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
        return str->next;

            
        
     
    }
};