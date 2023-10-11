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
    bool check(TreeNode *rootLeft, TreeNode *rootRight){
        if(!rootLeft && !rootRight)
            return true;
        else if(rootLeft && rootRight){
            if(rootLeft->val != rootRight->val)
                return false;

            return check(rootLeft->left, rootRight->right) && check(rootLeft->right, rootRight->left);
        }
        else
            return false;
    }
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
};