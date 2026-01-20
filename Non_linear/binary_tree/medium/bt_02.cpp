// https://leetcode.com/problems/balanced-binary-tree/
// LEETCODE 110
//Balance binary tree has the 
//absolute differnece b/w the left and righ t
//subtree is always in the range of (-1,0,1);


class Solution {
    int height(TreeNode* root, bool &valid){
        if(!root){
                return 0;
        }
        //left 
        int l=height(root->left, valid);
        int r=height(root->right, valid); 
        if(abs(l-r)>1){
            valid=0;
        }

        return 1+max(l,r); //height of btree 
}

public:
    bool isBalanced(TreeNode* root) {
        //if root (left - right)== {-1,0,1 } ;
        // then it is otherwise not balanced hota hai
        bool valid=1; 
        height(root,valid); 
        return  valid; 
    }
};
//variable change when passed as the function
// &valid -> if sent through & then change in the original 
