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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode *front = new ListNode();
        ListNode *middle = head;
        ListNode *last = head->next;
        head = front;
        while(last != NULL && last->next != NULL && last->next->next!=NULL){
            middle->next = last->next;
            front->next = last;
            last->next = middle;
            
            front = middle;
            middle = front->next;
            last = middle->next;
        }
        middle->next = last->next;
        front->next = last;
        last->next = middle;
        
        front = head;
        head = head->next;
        delete front;
        return head;

    }
};