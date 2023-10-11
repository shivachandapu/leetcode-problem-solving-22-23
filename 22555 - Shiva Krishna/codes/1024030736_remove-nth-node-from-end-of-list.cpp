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
        ListNode dummy(0,head);
        ListNode *i = &dummy;
        head = &dummy;
        
        for(int k=0; k<n ; ++k){
            head = head->next;
        }

        while(head->next!=NULL){
            i = i->next;
            head = head->next;
        }

        i->next = i->next->next;
        return dummy.next;
    }
};