/*
    Author : Dhanush Reddy
    Date : 09/10/2021
    Description : Recursive Approach for Post Order Traversal of a Binary Tree.
*/
#include <bits/stdc++.h>

typedef struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
} TreeNode;

class Solution {
public:
    vector <int> Answer;
    void Postorder (TreeNode* Root) {
        if (Root) {
            Postorder (Root -> left);
            Postorder (Root -> right);
            Answer.push_back (Root -> val);
        }
        return;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        Postorder (root);
        return Answer;
    }
};