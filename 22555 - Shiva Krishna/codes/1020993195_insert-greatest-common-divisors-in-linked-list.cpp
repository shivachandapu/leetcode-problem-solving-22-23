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
    int findGCD(int a, int b){
        while (a != b){
        if (a > b) a -= b;
        else b -= a;
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        // cout<<findGCD(10,5);
        if(!head || !head->next)
            return head;
        ListNode* temp = head;
        int gcd;
        while(temp->next != NULL){
            ListNode *dummy = new ListNode();
            gcd = findGCD(temp->val,temp->next->val);
            dummy->val = gcd;
            dummy->next = temp->next;
            temp->next = dummy;
            temp = dummy->next;
        }

        return head;
    }
};