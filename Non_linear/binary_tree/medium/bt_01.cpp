// https://leetcode.com/problems/maximum-depth-of-binary-tree/ 
//find the maximum depth of the binary tree 
//depth-> 
//height -> 

/*
What is Depth?
Depth of a node = number of edges from root to that node
Depth of root = 0
Maximum depth = longest path from root to any leaf

What is Height?
Height of a node = number of edges from that node to the deepest leaf
Height of a leaf node = 0
Height of tree = height of root

*/
// LEETCODE 104 -> height of the binary tree 
//code 104
class Solution {
public:
    int maxDepth(TreeNode* root) {
        //also called the heigh of the binary tree 
        if(root==NULL) return 0;

        int a=maxDepth(root->left); //rec -> left 
        int b=maxDepth(root->right); //rect-> 

        return max(a,b)+1;
        //+1 is added for the root node 
        
    }
};