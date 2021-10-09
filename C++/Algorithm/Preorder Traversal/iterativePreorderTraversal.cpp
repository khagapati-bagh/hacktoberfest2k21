/*
  Author : Akshay Dhayal  
  Date : 09/10/2021                 
  Description : Iterative Preorder Traversal of Binary tree
    */

#include <iostream>
#include <stack>
using namespace std;

// Data structure to store a binary tree node 
struct Node{
    int data;
    Node *left, *right;
 
    Node(int data){
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
// Iterative function for preorder traversal 
void preorderIterative(Node* root){
    // return if the tree is empty
    if (root == nullptr)
    return;
 
    stack<Node*> stack;
    stack.push(root);
    // loop till stack is empty
    while (!stack.empty()){
        // pop a node from the stack and print it
        Node* curr = stack.top();
        stack.pop();
 
        cout << curr->data << " ";
 
        if (curr->right) {
            stack.push(curr->right);
        }
 
        if (curr->left) {
            stack.push(curr->left);
        }
 
    }
}
 
 
int main(){
    /* Our Input Binary tree
      1 - 2,3
      2 - 4,null
      3 - 5,6
      4 - NULL,NULL
      5 - 7,8
      6 - NULL,NULL
      7 - NULL,NULL
      8 - NULL,NULL
    */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    preorderIterative(root);
 
    return 0;
}


