class Solution {
public:
    int numSpecialEquivGroups(vector<string> &A) {
        unordered_map<string, int> hash;
        for (int i = 0; i < A.size(); ++i) {
            string odd = "", even = "";
            for (int j = 0; j < A[i].size(); ++j) {
                if (j % 2 == 0) {
                    even += A[i][j];
                } else {
                    odd += A[i][j];
                }
            }

            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());
            hash[even+odd]++;
        }

        return hash.size();
    }
};
