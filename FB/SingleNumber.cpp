class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        for (int i : nums) {
            sum ^= i;
        }
        
        return sum;
    }
};

// Операция XOR работает так: a XOR 0 = a, a XOR a = 0. Именно поэтому останется только нужный элемент
