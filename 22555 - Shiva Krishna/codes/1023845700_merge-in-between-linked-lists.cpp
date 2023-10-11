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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *first = list1;
        
        ListNode *start, *end;
        for(int i=0; i<=b; ++i){
            if(i==a-1)
                start = first;
            if(i == b)
                end = first;
            first = first->next;
        }
        start->next = list2;

        ListNode *second;
        while(list2->next!=NULL){
            list2 = list2->next;
        }

        list2->next = end->next;
        delete end;
        return list1;
    }
};