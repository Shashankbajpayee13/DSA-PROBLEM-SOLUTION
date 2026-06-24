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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow= head;  //we have applied slow and fast pointer 
        ListNode* fast= head;
        while(fast != NULL && fast->next !=NULL){
            slow= slow->next; // slow pointer move 1 step 
            fast= fast->next->next;  // fast ptr move 2 step
            
        }
        return slow;
    }
};