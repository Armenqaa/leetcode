class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, int> an;
        vector<vector<string>> res;
        int j = 0;
        for (int i = 0; i < strs.size(); ++i) {
            string strs_cpy = strs[i];
            sort(strs_cpy.begin(), strs_cpy.end());
            if (an.find(strs_cpy) == an.end()) {
                an[strs_cpy] = j;
                res.push_back({strs[i]});
                j++;
            } else {
                res[an[strs_cpy]].push_back(strs[i]);
            }
        }
        
        return res;
    }
};
