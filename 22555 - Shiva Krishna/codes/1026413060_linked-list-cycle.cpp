/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        while(head->next!=NULL){
            if (head->val == 100001 && head->next->val == 100001)
                return true;
            head->val = 100001;
            head = head->next;
        }
        return false;
    }
};