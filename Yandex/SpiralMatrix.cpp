class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n));
        int layer = n + 1 / 2, curr_layer = 0;
        int i = 0, j = 0;
        int numb = 1;
        
        if (n == 1) {
            res[0][0] = numb;
            return res;
        }
        while (curr_layer != layer) {
            i = curr_layer;
            j = curr_layer;
            while(j <= n - curr_layer - 1) {
                res[i][j] = numb;
                j++;
                numb++;
            }
            j--;
            numb--;
            
            while (i < n - curr_layer - 1) {
                res[i][j] = numb;
                i++;
                numb++;
            }
            
            while (j > curr_layer) {
                res[i][j] = numb;
                j--;
                numb++;
            }
            
            while (i > curr_layer) {
                res[i][j] = numb;
                i--;
                numb++;
            }
            
            curr_layer++;
        }
        
        return res;
    }
};
