class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        int currsum = 0, count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            currsum+=nums[i];
            if (currsum - k == 0) {
                count++;
            }
            
            if (hash.find(currsum - k) != hash.end()) {
                count += hash[currsum - k];
                hash[currsum]++;
            } else {
                hash[currsum]++;
            }
        }
        return count;
    }
};
