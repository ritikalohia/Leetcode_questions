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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        map<int, int> mp;
        ListNode* gate = head; 
        while(gate!=NULL){
            mp[gate->val]++;
            gate = gate->next;
        }
        int flag=0;
        ListNode* output=new ListNode();
        ListNode* x =output;
        ListNode* test;
        while(head!=NULL){
            if(mp[head->val]==1){
                flag=1;
                x->val = head->val;
                ListNode* y= new ListNode();
                test = x;
                x->next = y;
                x = x->next;    
            }
            head = head->next;
        }
        
        if(flag==0)
            return NULL;
        else
            test->next =NULL;
        return output;
    }
};