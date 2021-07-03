class Solution {
public:
    bool eq(vector<int>& v1, vector<int>& v2) {
        for (int i = 0; i < v1.size(); ++i) {
            if (v1[i] != v2[i]) {
                return 0;
            }
        }
        
        return 1;
    }
    
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26);
        
        if (s1.length() > s2.length()) {
            return false;
        }
        
        for (int i = 0; i < s1.length(); ++i) {
            v1[s1[i] - 'a']++;
        }
        
        for (int i = 0; i <= s2.length() - s1.length(); ++i) {
            vector<int> v2(26);
            for (int j = 0; j < s1.length(); ++j) {
                v2[s2[i + j] - 'a']++;
            }
            
            if (eq(v1, v2)) {
                return true;
            }
        }
        
        return false;
    }
};
