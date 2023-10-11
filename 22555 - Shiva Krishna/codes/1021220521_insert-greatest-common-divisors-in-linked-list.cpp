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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* temp = head;
        int gcd;
        while(temp->next != NULL){
            ListNode *dummy = new ListNode();
            gcd = __gcd(temp->val,temp->next->val);
            dummy->val = gcd;
            dummy->next = temp->next;
            temp->next = dummy;
            temp = dummy->next;
        }
        return head;
    }
};