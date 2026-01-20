#include <bits/stdc++.h>
using namespace std;

// Define the TreeNode structure
struct TreeNode {
    int val;  // Value of the node
    TreeNode* left;  // Pointer to the left child
    TreeNode* right;  // Pointer to the right child
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}  // Constructor to initialize a node
};


/// @brief ITERATIVE PREORDER TRAVERSAL USING STACK DATA STRUCTURE 
class Solution {
public:
    // Function to perform preorder traversal of a binary tree iteratively
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;  // Vector to store the preorder traversal result
        
        // If the root is null, return an empty traversal result
        if(root == nullptr) {
            return preorder;
        }
        
        stack<TreeNode*> st;  // Stack to store nodes during traversal
        st.push(root);  // Push the root node onto the stack
        
        // Perform iterative preorder traversal
        while(!st.empty()) {
            root = st.top();  // Get the current node from the top of the stack
            st.pop();  // Remove the node from the stack
            
            preorder.push_back(root->val);  // Add the node's value to the preorder result
            
            // Push the right child onto the stack if exists
            if(root->right != nullptr) {
                st.push(root->right);
            }
            
            // Push the left child onto the stack if exists
            if(root->left != nullptr) {
                st.push(root->left);
            }
        }
        
        // Return the preorder traversal result
        return preorder;
    }
};

int main() {
    // Creating a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Initializing the Solution class
    Solution sol;

    // Getting the preorder traversal
    vector<int> result = sol.preorderTraversal(root);

    // Displaying the preorder traversal result
    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}