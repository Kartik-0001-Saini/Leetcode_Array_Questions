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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        bool oddLevel = false;
        while(!q.empty()){
            int sz = q.size();
            vector<TreeNode*> res;

            for(int i=0; i<sz; i++){
                TreeNode* node = q.front();
                q.pop();
                res.push_back(node);
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }

            if(oddLevel){
                int st = 0, end = res.size()-1;
                while(st < end){
                    swap(res[st]->val, res[end]->val);
                    st++;
                    end--;
                }
            }
            oddLevel = !oddLevel;
        }

        return root;
    }
};