class Solution {
public:
    void helper(TreeNode* fst, TreeNode* scd, bool& flag) {
        if (fst == nullptr && scd == nullptr) {
            return;
        }
        
        if (fst == nullptr || scd == nullptr) {
            flag = false;
            return;
        }
        
        if (fst -> val != scd -> val) {
            flag = false;
        }
        
        helper(fst -> left, scd -> left, flag);
        helper(fst -> right, scd -> right, flag);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool flag = true;
        helper(p, q, flag);
        return flag;
    }
};
