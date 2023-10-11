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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* i=head;
        ListNode* j=head->next;
        ListNode* k;
        
        while(j != NULL){
            k = j->next;
            j->next = i;
            i = j;
            j = k;
            
        }
        head->next = NULL;
        delete j;
        delete k;
        return i;        
    }
};