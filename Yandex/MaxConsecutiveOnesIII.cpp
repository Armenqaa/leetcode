class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count_zeroes = 0, j = 0, max_length = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                count_zeroes++;
            } 
            
            while(count_zeroes > k) {
                if (nums[j] == 0) {
                    count_zeroes--;
                }
                j++;
            }
            
            max_length = max(max_length, i - j + 1);
        }
        
        return max_length;
    }
};
