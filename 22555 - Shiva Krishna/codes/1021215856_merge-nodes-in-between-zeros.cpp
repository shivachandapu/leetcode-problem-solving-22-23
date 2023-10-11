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
    ListNode* mergeNodes(ListNode* head) {
        int sum;
        ListNode *temp = head;
        ListNode *i = temp->next;
        ListNode *j;
        while(i!=NULL){
            sum = 0;
            while(i->val != 0){
                sum += i->val;
                i = i->next;
            }
            temp->val = sum;
            j = i->next;
            temp->next = j;
            temp = j;
            i = j;
        }
        delete j;
        delete i;
        delete temp;
        return head;
    }
};