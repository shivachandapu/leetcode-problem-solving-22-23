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
    vector<int> tOne;
    vector<int> tTwo;
    
    vector<int> leafNodes(TreeNode* root){
        vector<int> str;
        stack<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            root = q.top();
            q.pop();
            if(root->left != NULL)
                q.push(root->left);
            if(root->right != NULL)
                q.push(root->right);
            if(root->left == NULL && root->right == NULL)
                str.push_back(root->val);
            root->left = NULL;
            root->right =NULL;
        }
        
        return str;
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL)
            return true;
        tOne = leafNodes(root1);
        tTwo = leafNodes(root2);
        return tOne == tTwo;
    }
};