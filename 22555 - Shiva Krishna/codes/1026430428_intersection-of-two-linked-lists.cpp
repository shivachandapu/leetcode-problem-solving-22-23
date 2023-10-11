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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int sizeA=0;
        int sizeB=0;

        ListNode *tempA = headA;
        ListNode *tempB = headB;
        while(tempA!=NULL || tempB!=NULL){
            if(tempA!=NULL){
                ++sizeA;
                tempA = tempA->next;
            }
            if(tempB!=NULL){
                ++sizeB;
                tempB = tempB->next;
            }
        }

        tempA = headA;
        tempB = headB;
        if(sizeA>sizeB){
            while(sizeA-sizeB){
                tempA=tempA->next;
                --sizeA;
            }
        }
        else if(sizeB>sizeA){
            while(sizeB-sizeA){
                tempB=tempB->next;
                --sizeB;
            }
        }

        while(tempA!=NULL){
            if (tempA == tempB)
                return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return NULL;
    }
};