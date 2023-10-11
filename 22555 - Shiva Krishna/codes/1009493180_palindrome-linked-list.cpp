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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL)
            return true;

        unsigned int n=0;
        ListNode* temp = head;
        while(temp != NULL){
            ++n;
            temp = temp->next;
        }

        cout<<n<<endl;
        int i=0;        
        stack<int> stack;
        stack.push(-1);
        while(head != NULL){
            if(i==n/2 && n%2==1){
                ++i;
                cout<<head->val<<endl;
                head = head->next;
                continue;
            }
            if(i<n/2)
                stack.push(head->val);
            else{
                if(stack.top() == head->val)
                    stack.pop();
                else 
                    return false;
            }
            cout<<head->val;
            head = head->next;
            ++i;    
        }
        if (stack.size() == 1) 
            return true;
        else
            return false;
        
        // return true;         
        
    }
};