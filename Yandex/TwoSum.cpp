class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> h;
        for (int i = 0; i < nums.size(); ++i) {
            if (h.find(target - nums[i]) != h.end()) {
                res.push_back(h[target-nums[i]]);
                res.push_back(i);
            } else {
                h[nums[i]] = i;
            }
        }
        return res;
    }
};
