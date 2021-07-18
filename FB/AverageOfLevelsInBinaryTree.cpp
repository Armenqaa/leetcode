class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        res.push_back(root -> val);
        while(!q.empty()) {
            int n = q.size(), count = 0;
            double sum {0};
            for (int i {0}; i < n; ++i) {
                auto* curr = q.front();
                q.pop();
                if (curr -> left != nullptr) {
                    q.push(curr -> left); 
                    sum += curr -> left -> val;
                    count++;
                }
                
                if (curr -> right != nullptr) {
                    q.push(curr -> right);
                    sum += curr -> right -> val;
                    count++;
                }
            }
            
            if (count != 0) {
                res.push_back(sum / count);
            } 
        }
        
        return res;
    }
};
