class Solution {
public:
  int findMaxConsecutiveOnes(int[] nums) {
        int res = 0, prev = 0, curr = 0;
        for (int i = 0; i < nums.size(); i ++) {
            curr++;
            if (nums[i] == 0) {
                prev = curr;
                curr = 0;
            } 
            res = max(res, prev + curr);
        }
        return res;
    }
}
