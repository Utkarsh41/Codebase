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
    bool isPalindrome(ListNode* head) {
        
        vector<int>h;
        
        ListNode*curr=head;
        
        while(curr!=nullptr){
            h.push_back(curr->val);
            curr=curr->next;
        }

        // for(auto c:h)cout<<c<<" ";
        
        int l=0,hi=h.size()-1;
        while(l<=hi){
            if(h[l]!=h[hi]){
                return false;
            }
            l++;hi--;
        }
        
        
        return true;
        
        
        
    }
};