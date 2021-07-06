class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0, max_idx = 0, curr_max = 0;
        for (int i = 1; i < height.size(); ++i) {
            if (height[i] > height[max_idx]) {
                max_idx = i;
            }
        }
        
        for (int i = 0; i < max_idx; ++i) {
            if (height[i] > curr_max) {
                curr_max = height[i];
                continue;
            } 
            water += curr_max - height[i];
        }
        
        curr_max = 0;
        for (int i = height.size() - 1; i > max_idx; --i) {
            if (height[i] > curr_max) {
                curr_max = height[i];
                continue;
            } 
            water += curr_max - height[i];
        }
        return water;
    }
};
