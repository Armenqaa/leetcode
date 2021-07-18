class Solution {
public:
    int helper(TreeNode* root, int& Max) {
        if (root == nullptr) {return 0;}
        int lt = helper(root -> left, Max);
        int rt = helper(root -> right, Max);
        Max = max(lt + rt, Max);
        return max(lt, rt) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int Max = 0;
        helper(root, Max);
        return Max;
    }
};
