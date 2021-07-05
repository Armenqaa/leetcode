class Solution {
public:
    bool isSafe(vector<vector<char>> &grid, vector<vector<int>>& visited, int i, int j) {
        return (i >= 0) && (i < grid.size()) && (j >= 0) && (j < grid[0].size()) && (!visited[i][j]) && (grid[i][j] == '1');
    }
    
    void DFS(vector<vector<char>> &grid, vector<vector<int>>& visited, int i, int j){
        visited[i][j] = 1;
        if (isSafe(grid, visited, i + 1, j)) {DFS(grid, visited, i + 1, j);}
        if (isSafe(grid, visited, i, j + 1)) {DFS(grid, visited, i, j + 1);}
        if (isSafe(grid, visited, i, j - 1)) {DFS(grid, visited, i, j - 1);}
        if (isSafe(grid, visited, i - 1, j)) {DFS(grid, visited, i - 1, j);}
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size(), count = 0;
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    DFS(grid, visited, i, j);
                    count++;
                }
            }
        }
        
        return count;
    }
};
