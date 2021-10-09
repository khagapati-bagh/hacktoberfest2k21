#include <iostream>
#include <stack>
using namespace std;
 
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
// Iterative function for preorder traversal 
void preorderIterative(Node* root)
{
    // return if the tree is empty
    if (root == nullptr)
    return;
 
    stack<Node*> stack;
    stack.push(root);

    while (!stack.empty())
    {
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
 
 
int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
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


