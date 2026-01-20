#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int key) {
        data = key;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    Node* createBinaryTree() {
        int val;
        cout << "Enter node value (-1 for NULL): ";
        cin >> val;

        if (val == -1) {
            return nullptr;
        }

        Node* root = new Node(val);

        cout << "Enter left child of " << val << endl;
        root->left = createBinaryTree();

        cout << "Enter right child of " << val << endl;
        root->right = createBinaryTree();

        return root;
    }
};

int main() {
    Solution solution;
    Node* root = solution.createBinaryTree();
    return 0;
}
