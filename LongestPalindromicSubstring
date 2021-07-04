class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1) {
            return s;
        }
        int max_length = 1, start = 0;
        string res = "";
        for (int i = 0; i < s.length(); ++i) {
            int k = i;
            int j = i + 1;
            while (k >= 0 && j < s.length() && s[k] == s[j]) { 
                if (j - k + 1 > max_length)  {
                    max_length = j - k + 1;
                    start = k;
                }
                k--;
                j++;
            }
            
            k = i - 1;
            j = i + 1;
            while (k >= 0 && j < s.length() && s[k]==s[j]) {
                if (j - k + 1 > max_length) {
                    max_length = j - k + 1;
                    start = k;
                }
                k--;
                j++;
            }
        }
        
        for (int i = 0; i < max_length; ++i) {
            res += s[start + i];
        }
        
        return res;
    }
    
    
};
