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
        if(head==NULL || head->next==NULL || k==0)
            return head;

        ListNode *last = head;
        int size = 1;
        while (last->next!=NULL){
            last = last->next;
            ++size;
        } 
        last->next = head;
        k = k%size;

        while(size-k){
            head = head->next;
            last = last->next;
            ++k;
        }

        last->next = NULL;
        return head;
    }
};