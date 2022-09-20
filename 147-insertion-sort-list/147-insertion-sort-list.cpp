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
    ListNode* insertionSortList(ListNode* head) {
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode*sorted = insertionSortList(head->next);
        
        if(sorted->val >= head->val){
            head->next = sorted;
            return head;
        }
        else{
            ListNode*prev = sorted;
            while(prev->next!=NULL && head->val>prev->next->val){
                prev = prev->next;
            }
            head->next=prev->next;
            prev->next = head;
            
            return sorted;
        }
    }
};