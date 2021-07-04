class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int fst = m - 1, sec = n - 1;
        while (fst >= 0 && sec >= 0) {
            if (nums1[fst] >= nums2[sec]) {
                nums1[fst + sec + 1] = nums1[fst];
                fst--;
            } else {
                nums1[fst + sec + 1] = nums2[sec];
                sec--;
            }
        }
        
        while (sec >= 0) {
            nums1[fst + sec + 1] = nums2[sec];
            sec--;
        }
            
    }
};
