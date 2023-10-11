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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> output;
        int size = 0;
        while(head!=NULL){
            ++size;
            output.insert(output.end(),head->val);
            head = head->next;
        }

        stack<pair<int,int>> st;
        st.push({output[0],0});

        for(int i=1; i<size; ++i){
            while(!st.empty() && output[i]>st.top().first){
                output[st.top().second] = output[i];
                st.pop();
            }
            st.push({output[i],i});
        }
        
        while(!st.empty()){
            output[st.top().second] = 0;
            st.pop();
        }
        return output;
    }
};