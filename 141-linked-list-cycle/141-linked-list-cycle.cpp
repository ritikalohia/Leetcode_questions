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
    bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        if(head==NULL || head->next==NULL)
            return false;
        fast= fast->next->next;
        slow= slow->next;
        while(fast!=slow){
            if(fast==NULL || fast->next==NULL)
                return false;
            fast= fast->next->next;
            slow= slow->next;
            
        }
        cout<<fast->val<<" "<<slow->val;
        return true;
    }
};