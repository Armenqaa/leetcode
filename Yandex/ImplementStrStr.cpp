class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") {
            return 0;
        }
        
        if (haystack.length() < needle.length()) {
            return -1;
        }
        
        int j = 0, i = 0;
        while (i <= haystack.length() - needle.length()) {
            j = 0;
            while (j < needle.length() && haystack[i + j] == needle[j]) {
                j++;
            }
            
            if (j == needle.length()) {
                return i;
            }
            i++;
        }
        
        if (j == needle.length()) {
            return i;
        }
        
        return -1;
        
    }
};
