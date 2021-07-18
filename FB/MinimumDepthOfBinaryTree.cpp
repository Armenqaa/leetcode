class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) {return 0;}
        queue<TreeNode*> q;
        q.push(root);
        int lvl = 1;
        while(!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; ++i) {
                auto* curr = q.front();
                q.pop();
                if (curr -> left == nullptr && curr -> right == nullptr) {
                    return lvl;
                }
                if (curr -> left != nullptr) {q.push(curr -> left);}
                if (curr -> right != nullptr) {q.push(curr -> right);}
            }
            
            lvl++;
        }
        
        return lvl;
    }
};
