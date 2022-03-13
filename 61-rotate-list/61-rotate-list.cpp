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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* x =head;
        int t=0;
        while(x!=NULL){
            x = x->next;
            t++;
        }
        
        if(k%t==0)
            return head;
        else
            k = k%t;
        
        ListNode* last = head;
        ListNode* prev = head;
        int e=1;
        while(e!=t-k){
            prev = prev->next;
            e++;
        }    
        while(last->next!=NULL)
            last = last->next;
        ListNode* d=prev->next;
        prev->next = NULL;
        last->next = head;
        head = d;
        
        return head;
    }
};