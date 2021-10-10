/*
    Author : Vishal Ambavade
    Date : Date format 10/10/2021
    Description : C++ program to print inorder traversal of tree using iterative approach.
*/

#include <iostream>
// Using stack 
#include <stack>

using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int data) {
        this -> data = data;
        left = right = NULL;
    }
};

// Iterative function for inorder traversal of a tree
void inOrderTraversal(struct Node* root) {
    stack<Node* > st;
    Node* current = root;

    while (current != NULL || st.empty() == false) {
        //Go to the left most node of a tree
        while (current != NULL) {
            st.push(current);
            current = current -> left;
        }

    current = st.top();
    st.pop();

    cout << current -> data << " ";

    current = current -> right;
    }    
}

int main() {
    struct Node* root = new Node(12);
    root -> left = new Node(56);
    root -> right = new Node(67);
    root -> left -> left = new Node(23);
    root -> left -> right = new Node(78);
    root -> right -> left = new Node(32);

    /* Counstructed binary tree:
                   12
                 /    \
               56      67
             /    \    /
            23    78  32
    */

    inOrderTraversal(root);
    return 0;
}
