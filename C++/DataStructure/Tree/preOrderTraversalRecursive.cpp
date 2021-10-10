/*
    Author : Siddharth Chaudhary
    Date : 10/10/2021
    Description : Preorder traversal recursive approach for binary tree
    n: Number of nodes in the binary tree
    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>

using namespace std;

struct Tree {
    Tree * leftChild;
    Tree * rightChild;
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

void preOrderTraversal(Tree * root) {
    if (root == NULL) {
        return;
    }

    // print current node value
    cout << root -> nodeValue << " ";

    // traverse left child's subtree
    preOrderTraversal(root -> leftChild);

    // traverse right child's subtree
    preOrderTraversal(root -> rightChild);
}

int main() {

    // root of the tree
    Tree * root = new Tree();

    // adding nodes to the tree.
    root -> leftChild = new Tree(5);
    root -> rightChild = new Tree(6);

    root -> leftChild -> leftChild = new Tree(1);
    root -> leftChild -> rightChild = new Tree(11);

    root -> rightChild -> leftChild = new Tree(12);
    root -> rightChild -> rightChild = new Tree(13);

    // print recursive preOrderTraversal
    preOrderTraversal(root);

    return 0;
}
