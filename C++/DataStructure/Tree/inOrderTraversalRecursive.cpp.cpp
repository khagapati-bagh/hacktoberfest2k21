/*
    Author : Siddharth Chaudhary
    Date : 09/10/2021
    Description : Inorder traversal recursive approach for binary tree
*/

#include <iostream>
using namespace std;

struct Tree {
  Tree *leftChild;
  Tree *rightChild;
  int nodeValue;
  Tree(int value) {
      leftChild = NULL;
      rightChild = NULL;
      nodeValue = value;
  }
  Tree() {
      leftChild = NULL;
      rightChild = NULL;
      nodeValue = -1;
  }
};

void inorderTraversal(Tree *root) {
    if (root == NULL) {
        return;
    }
    // traverse left child's subtree
    inorderTraversal(root->leftChild);
    
    // print current node value
    cout<<root->nodeValue<<" ";
    
    // traverse right child's subtree
    inorderTraversal(root->rightChild);
}

int main() {
	
	// root of the tree
	Tree *root = new Tree();
    
    // adding nodes to the tree.
    root->leftChild = new Tree(5);
    root->rightChild = new Tree(6);
    
    root->leftChild->leftChild = new Tree(1);
    root->leftChild->rightChild = new Tree(11);
    
    root->rightChild->leftChild = new Tree(12);
    root->rightChild->rightChild = new Tree(13);
    
    // print recursive inorderTraversal
    inorderTraversal(root);
    
	return 0;
}
