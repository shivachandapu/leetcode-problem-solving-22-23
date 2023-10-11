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
    TreeNode dummy;
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode *root3;
        if (root1==NULL and root2==NULL)
            return NULL;
        else if(root1==NULL){
            root3 = root2;
            root1 = &dummy;
        }
        else if(root2==NULL){
            root3 = root1;
            root2 = &dummy;
        }
        else{
            root1->val += root2->val;
            root3 = root1;
        }

        root3->left = mergeTrees(root1->left, root2->left);
        root3->right = mergeTrees(root1->right, root2->right);
        return root3;
    }
};