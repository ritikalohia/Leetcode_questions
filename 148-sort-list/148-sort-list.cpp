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
        vector<int> vect;
        if(head==NULL)
            return head;
        while(head!=NULL){
            vect.push_back(head->val);
            head = head->next;
        }
        sort(vect.begin(), vect.end());
        ListNode* x = new ListNode();
        
        
    
        x->val = vect[0];
        ListNode* z = x;    
        for(int i=1; i<vect.size(); i++){
            ListNode* y = new ListNode(); 
            y->val = vect[i];
            x->next = y;
            x = y;
        }
        
        return z;
    }
};