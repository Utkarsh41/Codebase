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
        Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        
         unordered_map<ListNode*,int>ut;
    
    for(ListNode*curr=head1;curr!=NULL;curr=curr->next){
        ut[curr]++;
    }
    for(ListNode*curr=head2;curr!=NULL;curr=curr->next){
        if(ut[curr]>0){
            return curr;
        }
    }
    return NULL;
        
    }
};