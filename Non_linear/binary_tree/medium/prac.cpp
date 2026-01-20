//Hiehg of the binary tree -> 
//number of edges from the root to the dephest node 

class Solution{
    public: 
    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0; //no node nothign 
        } //must in every code 

        int a=maxDepth(root->left);
        int b=maxDepth(root->right);


        return max(a,b) +1 ; //for the root
    }
}