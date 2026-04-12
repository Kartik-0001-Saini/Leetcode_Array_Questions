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
    int firstMin = INT_MAX;
    long long secondMin = LLONG_MAX;

    void solve(TreeNode* root){
        if(root == NULL) return;

        if(root->val <= firstMin){
            firstMin = root->val;
        }
        else if(root->val < secondMin){
            secondMin = root->val;
        }

        solve(root->left);
        solve(root->right);
    }

    int findSecondMinimumValue(TreeNode* root) {
        solve(root);

        return secondMin == LLONG_MAX ? -1 : secondMin;
    }
};