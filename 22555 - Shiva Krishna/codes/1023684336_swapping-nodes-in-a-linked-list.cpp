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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *i = head;
        ListNode *j = head;
       
        for(int n=0; n<k-1; ++n){
            j = j->next;
        }
        
        ListNode *t = j;
        while(j->next!=NULL){
            i = i->next;
            j = j->next;
        }

        swap(t->val,i->val);
        return head;

    }
};