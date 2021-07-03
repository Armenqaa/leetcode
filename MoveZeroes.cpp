class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() < 2) {
            return;
        }
        int j = 0;
        int i = 0;
        while (j < nums.size()) {
            if (nums[j] == 0) {
                j++;
                continue;
            }
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            i++;
            j++;
        }
    }
};
