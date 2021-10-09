//C++
/*
        Author : Tanya Bansal
        Date : 22/01/2003
        Description : Post Order Traversal of a Binary tree.
*/


#include <iostream>

#include <stack>

using namespace std;

// Data structure to store a binary tree node
struct Node {
  int data;
  Node * left, * right;

  Node(int data) {
    this -> data = data;
    this -> left = this -> right = nullptr;
  }
};

// Iterative function to perform postorder traversal on the tree
void postorderIterative(Node * root) {
  // create an empty stack and push the root node
  stack < Node * > s;
  s.push(root);

  // create another stack to store postorder traversal
  stack < int > out;

  // loop till stack is empty
  while (!s.empty()) {
    // pop a node from the stack and push the data into the output stack
    Node * curr = s.top();
    s.pop();

    out.push(curr -> data);

    // push the left and right child of the popped node into the stack
    if (curr -> left) {
      s.push(curr -> left);
    }

    if (curr -> right) {
      s.push(curr -> right);
    }
  }

  // print postorder traversal
  while (!out.empty()) {
    cout << out.top() << " ";
    out.pop();
  }
}

int main() {
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

  Node * root = new Node(1);
  root -> left = new Node(2);
  root -> right = new Node(3);
  root -> left -> left = new Node(4);
  root -> right -> left = new Node(5);
  root -> right -> right = new Node(6);
  root -> right -> left -> left = new Node(7);
  root -> right -> left -> right = new Node(8);

  postorderIterative(root);

  return 0;
} 


