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
    set<int,less<int>> s;
    void traverse(TreeNode* root){
        if(root == NULL)
            return;
        s.insert(root->val);
        traverse(root->left);
        traverse(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {      
        if(root->left == NULL)
            return -1;
        traverse(root);
        if(s.size()>1){
            set<int,less<int>>::iterator itr = s.begin();
            ++itr;
            return *itr;
        }
        return -1;
    }
}; 