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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* l3 = new ListNode((l1->val + l2->val)%10);
        ListNode* start = l3;
        int c = (l1->val + l2->val)/10;
        l1 = l1->next;
        l2 = l2->next;
        
        while(l1!=NULL || l2!=NULL){
            if(l1==NULL){
                ListNode* v = new ListNode((c + l2->val)%10);
                c = (c + l2->val)/10;
                l2 = l2->next;
                l3->next = v;
            }
            else if(l2==NULL){
                ListNode* v = new ListNode((c + l1->val)%10);
                c = (c + l1->val)/10;
                l1 = l1->next;
                l3->next = v;
            }
            else{
                ListNode* v = new ListNode((c+ l1->val + l2->val)%10);
                c = (c+ l1->val + l2->val)/10;
                l1 = l1->next;
                l2 = l2->next;
                l3->next = v;
            }
            
            l3 = l3->next;
        }
        
        if(c==1){
            ListNode* r = new ListNode(1);
            l3->next = r;
        }
        
        return start;
    }
};