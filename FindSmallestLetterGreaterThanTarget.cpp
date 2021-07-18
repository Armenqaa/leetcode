class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size() - 1, mid;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if ((letters[mid] > target && mid == 0) || (mid > 0 && letters[mid] > target && letters[mid - 1] <= target) ) {
                return letters[mid];
            } 
            
            if (letters[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        return letters[0];
    }
};
