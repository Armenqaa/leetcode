class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        
        int j = 0, max_length = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (m[s[i]] == 0) {
                m[s[i]]++;
            } else {
                while (s[j] != s[i]) {
                    m[s[j]]--;
                    j++;
                }
                j++;
            }
            max_length = max(max_length, i - j + 1);
        }
        
        return max_length;
    }
};
