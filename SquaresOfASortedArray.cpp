class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        vector<int> res(nums.size());
        int i = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            nums[i] *= nums[i];
        }
        
        while (l <= r) {
            if (nums[l] >= nums[r]) {
                res[r - l] = nums[l];
                l++;
            } else {
                res[r - l] = nums[r];
                r--;
            }
        }
        
        return res;
    }
}; 
