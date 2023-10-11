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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
            return head;
        
        ListNode *dummy = new ListNode(-101);
        dummy->next = head;

        ListNode *temp = head;     
        head = dummy;

        
        while(temp!=NULL){
            bool check = false;
            while(temp->next!=NULL && temp->val == temp->next->val){
                temp = temp->next;
                check = true;
            }
            if(check){
                head->next = temp->next;
            }
            else{
                head = head->next;
            }
            temp = temp->next;
        }
        head = dummy->next;
        delete dummy;
        return head;
        
    }
};