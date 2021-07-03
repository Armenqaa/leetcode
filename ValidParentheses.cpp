//stack realization
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push(s[0]);
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else if (st.size() == 0 || (s[i] == ')' && st.top() != '(') || (s[i] == ']' && st.top() != '[') || 
(s[i] == '}' && st.top() != '{')) {
                return 0;
            } else {
                st.pop();
            }
        }
        if (st.size() != 0) {
            return 0;
        }
        
        return 1;
    }
};
