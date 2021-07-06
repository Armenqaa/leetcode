class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefprodbeg(n+1);
        vector<int> prefprodend(n+1);
        prefprodbeg[0] = 1;
        prefprodend[0] = 1;
        for (int i = 0; i < nums.size(); ++i) {
            prefprodbeg[i + 1] = prefprodbeg[i] * nums[i];
            prefprodend[i + 1] = prefprodend[i] * nums[n - i - 1];
        }
        
        
        for (int i = 0; i < nums.size(); ++i) {
            prefprodbeg[i] = prefprodbeg[i] * prefprodend[n - i - 1];
            // Можно сделать доп массив, но так будет экономия места
        }
        
        prefprodbeg.resize(n);
        
        return prefprodbeg;
    }
};
