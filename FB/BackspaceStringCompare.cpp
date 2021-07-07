class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int jump_j = 0, j = s.size() - 1, m = t.size() - 1, jump_m = 0;
        while (1) {
            while (j >= 0 && (s[j] == '#' || jump_j != 0)) {
                if (s[j] == '#') {
                    jump_j++;
                } else {
                    jump_j--;
                }
                j--;
            }
            
            while (m >= 0 && (t[m] == '#' || jump_m != 0)) {
                if (t[m] == '#') {
                    jump_m++;
                } else {
                    jump_m--;
                }
                m--;
            }
            
            if (j == -1 && m == -1) {
                break;
            }
            
            if ((j == -1 && m != -1) || (j != -1 && m == -1) || (s[j] != t[m])) {
                return 0;
            }
            
            j--;
            m--;
        }
        
        return 1;
        
    }
};
