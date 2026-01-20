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

 //PRE ORDER TRAVERSAL CODE USE HELPER FUNCTION 
class Solution {
    void preorder(vector<int> &vec, TreeNode* root){
        if(root==NULL){
            return ;
        }
        //preroot-> left=> right
        vec.push_back(root->val);
        preorder(vec,root->left);
        preorder(vec,root->right);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec; 
        preorder(vec, root);
        return vec;
    }
};