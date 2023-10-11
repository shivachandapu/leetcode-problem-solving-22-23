/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string tOne = "";
    string tTwo = "";
    
    string leafNodes(TreeNode* root){
        string str = "";
        stack<TreeNode*> q;
        q.push(root);
        TreeNode* temp;
        while(!q.empty()){
            temp = q.top();
            // cout<<temp->val;
            q.pop();
            if(temp->left != NULL)
                q.push(temp->left);
            if(temp->right != NULL)
                q.push(temp->right);
            if(temp->left == NULL && temp->right == NULL)
                str += std::to_string(temp->val);
        }
        // cout<<str<<endl;
        return str;
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL)
            return true;
        tOne = leafNodes(root1);
        tTwo = leafNodes(root2);
        // cout<<tOne<<" "<<tTwo<<endl;
        if (tOne == tTwo)
            return true;
        return false;
    }
};