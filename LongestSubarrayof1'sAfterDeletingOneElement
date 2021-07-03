class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int prev = 0, curr = 0, max_length = 0;
        bool zero = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1 && !zero) {
                prev++;
            } else if (nums[i] == 1 && zero){
                curr++;
            } else if (nums[i] == 0 && !zero) {
                zero = true;
            } else {
                prev = curr;
                curr = 0;
            }
            
            max_length = max(prev + curr, max_length);
        }
        
        if (prev == nums.size()) {
            return nums.size() - 1;
        }
        
        return max_length;
    }
};
