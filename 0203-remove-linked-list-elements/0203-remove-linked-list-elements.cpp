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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL || head->next==NULL)return head;
        
        ListNode*t;
        
        while(head!=NULL && head->val==val){
            t=head;
            head=head->next;
            delete t;
        }
        
        
        
        ListNode*curr=head;
        
        while(curr!=NULL && curr->next!=NULL ){
            if(curr->next->val==val){
                t=curr->next;
                curr->next=curr->next->next;
                delete t;
            }
            curr=curr->next;
        }
        
        // if(curr!=NULL && curr->val==val)return curr->next;
        
        return head;
    }
};
class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
	
		ListNode* del;					
		while(head != NULL && head->val == val)       //edge case
		{ 
				del = head;
				head = head->next;    
				delete del;
		}
		  ListNode* temp = head;
		
		while(temp && temp->next)                     //iteration over the LL
		{
			if(temp->next->val == val)               //if value matches
			{         
				del = temp->next;
				temp->next = temp->next->next;
				delete del;

			}
				else                             //if value matches
				temp = temp->next;
		}
		return head;
	}
};
// [1,2,6,3,4,5,6]
// 6
// []
// 1
// [7,7,7,7]
// 7