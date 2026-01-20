///INORDER TRAVERSAL OF BINARY TREE 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
//BFS => BREADTH FIRST SEARCH ALGORITHM 
class Solution {
public:
    void levelOrderTraversal(vector<vector<int>> &ans, TreeNode* root) {
        if (root == NULL) return;   

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val); //nikalo and push _back 

                //left ko dekho
                if (node->left != NULL)
                    q.push(node->left);
                //right ko dekho
                
                if (node->right != NULL)
                    q.push(node->right);
            }
            ans.push_back(level);
        }
    }
    //BFS => BREADTH FIRST SEARCH ALGORITHM 
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrderTraversal(ans, root);
        return ans;
    }
};
