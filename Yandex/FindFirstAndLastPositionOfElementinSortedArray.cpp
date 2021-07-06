class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid, left_idx = -1, right_idx = -1;
        if (nums.size() == 0) {
            return {-1, -1};
        }
        
        while (left <= right) {
            mid = (left + right) / 2;
            if (target == nums[mid] && (mid == 0 || target != nums[mid - 1])) {
                left_idx = mid;
                break;
            } 
            
            if (target > nums[mid]) {
                left = mid + 1;
                continue;
            }
            
            right = mid - 1;
        }
        
        if (nums[mid] != target) {
            return {-1, -1};
        }
        
        left = 0, right = nums.size() - 1;
        while (left <= right) {
            mid = (left + right) / 2;
            if (target == nums[mid] && (mid == nums.size() - 1 || target != nums[mid + 1])) {
                right_idx = mid;
                break;
            } 
            
            if (target < nums[mid]) {
                right = mid - 1;
                continue;
            }
            
            left = mid + 1;
            
        }
        
        right_idx = mid;
        
        return {left_idx, right_idx};
    }
};
