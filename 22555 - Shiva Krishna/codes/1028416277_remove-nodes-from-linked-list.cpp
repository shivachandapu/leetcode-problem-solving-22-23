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
    ListNode* removeNodes(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *temp = head;
        stack<int> s;
        while(temp!=NULL){
            s.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        int greater = INT_MIN;
        
        ListNode *prev_to_temp=head;
        while(!s.empty()){
            if (s.top() >= greater){
                greater = s.top();
                temp->val = greater;
                prev_to_temp = temp;
                temp = temp->next;
            }
            s.pop();
        }

        prev_to_temp->next = NULL;
        temp = head;
        ListNode* prev=head;
        ListNode* curr=head->next;
        
        while(curr != NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;   
        }

        head->next = NULL;
        return prev;        




    }
};