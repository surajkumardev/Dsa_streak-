//creation of binary tree based on the input from the user 

#include <iostream>
using namespace std;

class Node{
    public: 
    int data; 
    Node* left; 
    Node* right; 
    Node(int val){
        this->data=val;
        left=right=NULL;
    }
};

//MOSTLY ASKED TO CREATE BY USER INPUT ONLY ♨️♨️🙅🏼‍♂️🩷🤓
//BASED ON THE USER INPUT CREATE A BINARY TREE 

Node* buildTree (){
    int val;
    cin>>val;
    if(val==-1){
        return NULL;
    }
    Node* root=new Node(val);
    //left child
    root->left=buildTree();
    //right child
    root->right=buildTree();
    return root;
}

void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    
}
int main() {
//     Node* root=new Node(10);
//     root->left=new Node(20);
//     root->right=new Node(2)

    //based on the user input given by the user 
    Node* root=buildTree();
preorderTraversal(root);
    // cout << "Hello, World!";

    return 0;
}
