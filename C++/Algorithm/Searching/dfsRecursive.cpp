/*
    Author : Krutika Bhatt
    Date : 07/10/2021
    Description : Depth-first search (DFS) is an algorithm for traversing elements in 2D Matrix
*/

/* 
    Time Complexity : O(M*N)
    Space Complexity : O(M*N)
    here, M is the number of rows and N is the number of columns
*/

#include <bits/stdc++.h>

using namespace std;


void DFSrecursive(int grid[][4],int row,int col,bool visited[][4]) {

    int length = 4;
    int height = 4;

     if (row < 0 || col < 0 || row >= length || col >= height || visited[row][col]) {
         return;
     }
           

    //mark the cell visited
    visited[row][col] = true;

    cout << grid[row][col] << " ";

    DFSrecursive(grid, row+ 1, col,visited); // go right to that cell in matrix
    DFSrecursive(grid, row- 1, col,visited); //go left to that cell in matrix
    DFSrecursive(grid, row, col + 1,visited); //go down to that cell in matrix
    DFSrecursive(grid, row, col - 1,visited); // go up to that cell in matrix

}
void DFS(int grid[4][4]) {
 
    // Maintain a boolean 2D Array to check if the elements are visited or not 
    bool visited[4][4];
    memset(visited, false, sizeof visited);

    // Start the DFS recursive function with start row=0 and start col=0
    DFSrecursive(grid,0,0,visited);
}

int main() {

    int grid[4][4] = {
                {1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12},
                {13, 14, 15, 16}
        };

    cout <<"The Depth first traversal to the matrix is : ";
    DFS(grid);

    return 0;
}
