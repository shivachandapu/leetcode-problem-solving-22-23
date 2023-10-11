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
    int pairSum(ListNode* head) {
        ListNode *mid = head;
        ListNode *curr = head;
        ListNode *temp;
        ListNode *head2;
        // Find the next half of the linked list.
        while(curr!=NULL){
            mid = mid->next;
            curr = curr->next->next;
        }
        
        // Reverse the second half of the linked list.
        head2 = mid; 
        curr = mid->next;
        while(curr != NULL){
            temp = curr->next;
            curr->next = head2;
            head2 = curr;
            curr = temp;   
        }
        mid->next = NULL;

        // Now head2 is the head of the new reversed linked list.
        // Addition of Node values.
        int maxSum = 0;
        int sum = 0;
        cout<<mid->val<<" "<<head->val<<endl;
        while(head2!=NULL){
            cout<<head->val<<" "<<head2->val<<endl;
            sum = head->val + head2->val;
            if (sum > maxSum)
                maxSum = sum;
            head = head->next;
            head2 = head2->next;
        }
        delete head2;
        delete mid;
        delete temp;
        return maxSum;
    }
};