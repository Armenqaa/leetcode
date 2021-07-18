class Solution {
public:
    void helper(TreeNode* root, int sum, int targetSum, bool& flag) {
        if (root == nullptr) {
            return;
        }
        
        if (root -> left == nullptr && root -> right == nullptr) {
            sum += root -> val;
            if (sum == targetSum) {
                flag = true;
            }
            return;
        }
        
        sum += root -> val;
        helper(root -> left, sum, targetSum, flag);
        helper(root -> right, sum, targetSum, flag);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        
        bool flag = false;
        int sum = 0;
        helper(root, sum, targetSum, flag);
        return flag;
    }
};
