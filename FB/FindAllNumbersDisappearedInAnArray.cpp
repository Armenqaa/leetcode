class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> range(nums.size() + 1);
        if (nums.size() == 1) {
            return nums;
        }
        int length = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (range[nums[i]] == 0) {
                range[nums[i]] = 1;
                length++;
            }
        }
        
        length = nums.size() - length;
        vector<int> res(length);
        int j = 0;
        for (int i = 1; i < range.size(); ++i) {
            if (range[i] == 0) {
                res[j] = i;
                j++;
            }
        }
        return res;
    }
};
