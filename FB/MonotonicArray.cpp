class Solution {
public:
    bool isMonotonic(vector<int> &A) {
        bool isIncr = 0;
        bool isFst = 1;
        if (A.size() == 1) {
            return true;
        }


        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] < A[i + 1] && isFst) {
                isFst = 0;
                isIncr = 1;
            } else if (A[i] < A[i + 1] && !isIncr) {
                return 0;
            } else if (A[i] > A[i + 1] && isFst) {
                isFst = 0;
            } else if (A[i] > A[i+1] && isIncr) {
                return 0;
            }
        }

        return 1;
    }
};
