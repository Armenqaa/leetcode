class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int layer = (n + 1) / 2, curr_layer = 0, j = 0;
        while (curr_layer < layer) {
            for (int j = curr_layer; j < n - curr_layer - 1; ++j) {
                int tmp = matrix[curr_layer][j];
                matrix[curr_layer][j] = matrix[n - j - 1][curr_layer];
                matrix[n - j - 1][curr_layer] = matrix[n - curr_layer - 1][n - j - 1];
                matrix[n - curr_layer - 1][n - j - 1] = matrix[j][n - curr_layer - 1];
                matrix[j][n - curr_layer - 1] = tmp;
            }
            curr_layer++;
        }
        
    }
};
