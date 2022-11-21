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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL || head->next==NULL)return head;
        
        ListNode*curr=head,*prev=NULL;
        
        while(curr && curr->next){
            prev=curr;
            if(curr->val==curr->next->val){
                curr->next=curr->next->next;
                
            }
            if(prev->val==curr->val){
                
            }
            else{
                curr=curr->next;
            }
        }
        return head;
        
    }
};



class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL || head->next==NULL)return head;
        
        map<int,int>mp;
        for(ListNode*c=head;c!=NULL;c=c->next){
            mp[c->val]++;
        }
        ListNode*res=new ListNode(-1);
        ListNode*curr=res;
        for(auto c:mp){
            if(c.second==1){
                curr->next=new ListNode(c.first);
                curr=curr->next;
            }
        }
        
        return res->next;
        
    }
};