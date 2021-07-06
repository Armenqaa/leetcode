/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool helper(TreeNode* curr1, TreeNode* curr2) {
        if (curr1 == NULL && curr2 == NULL) {
            return true;
        }
        
        if (curr1 == NULL || curr2 == NULL) {
            return false;
        }
        
        if (curr1 -> val == curr2 -> val) {
            return helper(curr1 -> left, curr2 -> right)
                   && helper(curr1 -> right, curr2 -> left);
        } else {
            return false;
        }
    }
    
    bool isSymmetric(TreeNode* root) {
        return helper(root->left, root->right);
    }
};
