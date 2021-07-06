class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int posX = 0, posY = 0, left = 0, 
        right = nums1.size(); 
        int maxLeftX, minRightX, maxLeftY, minRightY;
        while (left <= right) {
            posX = (left + right) / 2;
            posY = (nums1.size() + nums2.size() + 1) / 2 - posX;
            maxLeftX = posX == 0 ? -2147483648 : nums1[posX - 1];
            minRightX = posX == nums1.size() ? 2147483647 : nums1[posX];
            maxLeftY = posY == 0 ? -2147483648 : nums2[posY - 1];
            minRightY = posY == nums2.size() ? 2147483647 : nums1[posY];
            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                if ((nums1.size() + nums2.size()) % 2 == 0) {
                    return (double(max(maxLeftX, maxLeftY)) + min(minRightX, minRightY)) / 2;
                } else {
                    return max(maxLeftX, maxLeftY);
                }
            } else if (maxLeftX > minRightY) {
                right = posX - 1;
            } else {
                left = posX + 1;
            }
        }
        
    }
};
