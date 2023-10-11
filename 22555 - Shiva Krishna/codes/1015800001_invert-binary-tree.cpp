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
    TreeNode* invertTree(TreeNode* root) { 
        if(root == NULL)
            return root;
        list<TreeNode*> que = {root};
        while(not que.empty()){
            auto temp = que.front();
            que.pop_front();
            swap(temp->left,temp->right);
            if(temp->left != NULL)
                que.push_back(temp->left);
            if(temp->right != NULL)
                que.push_back(temp->right);
        }
        return root;
    }
};