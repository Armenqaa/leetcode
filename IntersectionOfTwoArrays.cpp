class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1;
        vector<int> res;
        
        for (int i = 0; i < nums1.size(); ++i) {
            m1[nums1[i]]++;    
        }
        
        for (auto elem : nums2) {
            if (m1.find(elem) != m1.end() && m1[elem] > 0) {
                res.push_back(elem);
                m1[elem]--;
            }
        }
        
        return res;
        
    }
};
