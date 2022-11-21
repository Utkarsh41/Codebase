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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        if(head==NULL || head->next==NULL || head->next->next==NULL)return {-1,-1};
         vector<int> ut;
        
        ListNode*prev=head,
        
        *curr=prev->next,
        *fd=curr->next;
        int i=0;
        while(prev && curr && fd){
            i++;

            if((curr->val > prev->val && curr->val >fd->val)|| 
               (curr->val < prev->val && curr->val < fd->val)){
                ut.push_back(i);
            }
            prev=prev->next;
            curr=prev->next;
            fd=curr->next;
            
        }
        
        for(auto c:ut)cout<<c<<endl;
        
        if(ut.size()>=2){
        
        int mn=INT_MAX;
        for(int i=0;i<ut.size()-1;i++){
            mn=min(mn,ut[i+1]-ut[i]);
        }
        int mx=ut[ut.size()-1]-ut[0];
        
        return {mn,mx};
        }
        else{
            return {-1,-1};
        }
        
    }
};