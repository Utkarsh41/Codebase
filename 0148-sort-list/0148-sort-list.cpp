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
    ListNode* sortList(ListNode* head) {
        
        vector<int>ut;
        int l=0;
        ListNode*curr=head;
        while(curr){
            ut.push_back(curr->val);
            l++;
            curr=curr->next;
        }
        sort(ut.begin(),ut.end());
        curr=head;
        int i=0;
        while(curr){
            curr->val=ut[i++];
            
            curr=curr->next;
        }
        return head;
    }
};