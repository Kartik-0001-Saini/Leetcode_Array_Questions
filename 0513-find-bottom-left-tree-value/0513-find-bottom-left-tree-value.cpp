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
    int findBottomLeftValue(TreeNode* root) {
        if(root == NULL) return 0;

        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> res;
        // So in this question what we are doing -->
        // We known that from Level Order Traversal we store root from
        // left to right.. And in this question we want the left element of last row of
        // the tree. By LOT (Lev. Ord. Tvs.) we get the last most element in our vector
        // at (n-1)th place and because we want left most it always present at 0th index.. 

        while(!q.empty()){
            int size = q.size();
            vector<int> ans;

            for(int i=0; i<size; i++){
                TreeNode* node = q.front();
                q.pop();
                ans.push_back(node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }

            res.push_back(ans);
        }

        int n = res.size();
        return res[n-1][0];
    }
};