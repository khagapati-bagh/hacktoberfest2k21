/*
  Author : Anshul Sharma
  Date : 08/10/2021
  Description : DFS Traversal in 2D matrix
*/

#include <bits/stdc++.h>
using namespace std;

int n;
int m;
int vis[1001][1001];
int grid[1001][1001];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
  cout << grid[x][y] << " ";
  vis[x][y] = 1;
  for (int i = 0; i < 4; i++) {
    int u = x + dx[i];
    int v = y + dy[i];
    if (u >= 0 && u < n && v >= 0 && v < m && vis[u][v] == 0) {
      dfs(u, v);
    }
  }
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
      vis[i][j] = 0;
    }
  }
  dfs(0, 0);
  return 0;
}
