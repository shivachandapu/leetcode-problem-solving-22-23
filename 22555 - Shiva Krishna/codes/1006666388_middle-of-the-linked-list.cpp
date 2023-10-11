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
        if(head->next == NULL)
            return head;
        ListNode *i=head,*j=head;
        while(j!=NULL && j->next!=NULL && j->next->next!=NULL){
            i = i->next;
            j = j->next->next;
        }
        if(j->next!=NULL)
            return i->next;
        return i;
    }
};