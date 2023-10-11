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
    vector<string> output;

    void paths(TreeNode* root,string path){
        if (root == NULL)
            return;

        if(root->left==NULL and root->right==NULL){
            path += to_string(root->val);
            output.push_back(path); 
            return;
        }
        path += to_string(root->val) + "->";

        paths(root->left,path);
        paths(root->right,path);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        string path;
        paths(root,path);
        return output;
    }
};