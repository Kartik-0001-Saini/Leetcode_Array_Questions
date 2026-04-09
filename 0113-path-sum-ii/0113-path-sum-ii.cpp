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

    void backtrack(TreeNode* root, int target, int sum, vector<int>& ans, vector<vector<int>>& res){
        // base condition
        if(root == NULL){
            return;
        }
        // simply adding the root value in our variable
        sum += root->val;
        // pushing every element in array which we found in path
        ans.push_back(root->val);
        // condition to append in res vector
        if(root->left == NULL && root->right == NULL && sum == target){
            res.push_back(ans);
            // return;
        }
        // Here i doing backtracking in left and right branch
        backtrack(root->left, target, sum, ans, res);
        backtrack(root->right, target, sum, ans, res);
        // main step if the element is not equal to target then we pop back from our ans vector
        ans.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        // for appending path
        vector<int> ans;
        // for appending different paths
        vector<vector<int>> res;
        // performing backtracking
        backtrack(root, targetSum, 0, ans, res);
        return res;
    }
};