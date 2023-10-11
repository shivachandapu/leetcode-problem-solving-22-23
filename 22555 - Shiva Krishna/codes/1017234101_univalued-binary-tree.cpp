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
        set<int> s = {root->val};
        list<TreeNode*> q = {root};
        while(!q.empty()){
            auto temp = q.front();
            q.pop_front();
            if(temp->left != NULL){
                q.push_back(temp->left);
                s.insert(temp->left->val);
            }
            if(temp->right != NULL){
                q.push_back(temp->right);
                s.insert(temp->right->val);
            }
        }
        if(s.size() == 1)
            return true;
        return false;
    }
};