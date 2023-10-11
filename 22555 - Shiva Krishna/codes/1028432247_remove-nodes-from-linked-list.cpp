/**
* Definition for singly-linked list.
* struct ListNode {
* int val;
* ListNode *next;
* ListNode() : val(0), next(nullptr) {}
* ListNode(int x) : val(x), next(nullptr) {}
* ListNode(int x, ListNode *next) : val(x), next(next) {}
* };
*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *current=head;
        ListNode *prev=NULL;
        ListNode *next=NULL;
        while(current!=NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head=prev;
        return head;
    }

    ListNode* removeNodes(ListNode* head) {
        if(head->next==NULL) 
            return head;
        head = reverseList(head);
        ListNode *trav=head->next;
        ListNode *temp;
        ListNode *max=head;
        
        while(trav!=NULL){
            if(trav->val>=max->val){
                max->next = trav;
                max = trav;
            }
            trav = trav->next;
        }
        max->next=NULL;
        head = reverseList(head);
        return head;
    }
};