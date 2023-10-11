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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)
            return head;
        ListNode *i = head;
        ListNode *j = head;

        
        for(int k=0; k<n ; ++k){
            cout<<j->val<<" ";
            j = j->next;
        }
        if(j == NULL)
            return head->next;

        while(j->next!=NULL){
            i = i->next;
            j = j->next;
        }

        i->next = i->next->next;
        return head;
    }
};