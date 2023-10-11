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
    int getDecimalValue(ListNode* head) {
        
        int bin = 0;
        for(;head != NULL; head=head->next)
            bin = ((bin << 1) | head->val);
        return bin;

        // unsigned int bin = 0;
        // while(head != NULL){
        //     bin = ((bin << 1) | head->val);
        //     head = head->next; 
        // }
        // return bin;

    }
};