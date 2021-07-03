class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if (nums.size() == 0) {
            return res;
        }
        int j = 0;
        int first = nums[0];
        int second = nums[0];
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] + 1 == nums[i+1]) {
                second++;
                continue;
            }
            if (first == second) {
                res.push_back(to_string(first));
            } else  {
                res.push_back(to_string(first) + "->" + to_string(second));
            }
            first = nums[i+1];
            second = nums[i+1];
        }
        if (first == second) {
            res.push_back(to_string(first));
        } else  {
            res.push_back(to_string(first) + "->" + to_string(second));
        }
        return res;
    }
};
