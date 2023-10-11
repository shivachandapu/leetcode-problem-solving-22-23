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
    
    bool isUnivalTree(TreeNode* root) {
        // int val = root->val;
        list<TreeNode*> q = {root};
        while(!q.empty()){
            auto temp = q.front();
            if(temp->val != root->val)
                return false;
            q.pop_front();
            if(temp->left != NULL)
                q.push_back(temp->left);    
            if(temp->right != NULL)
                q.push_back(temp->right);       
        }
        return true;
    }
};