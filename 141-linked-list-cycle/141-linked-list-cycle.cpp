/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    bool hasCycle(ListNode *head) {
        
        if(head==NULL)return false;
        ListNode*s=head,*f=head;
        
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
            
            if(s==f)return true;
        }
        return false;
        
        
    }
};