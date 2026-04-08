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

    TreeNode* addRow(TreeNode* root, int val, int depth, int curr){
        // if didn't find root then we return NULL
        if(root == NULL) return NULL;
        // we apply checking condition if current depth is given depth -1 then we have to 
        // add the new node
        if(curr == depth-1){
            // Here we are tracking the next node so we can connect the node to our new value
            TreeNode* leftNode = root->left;
            TreeNode* rightNode = root->right;
            // we are making these new nodes with given value
            TreeNode* newLeftNode = new TreeNode(val);
            TreeNode* newRightNode = new TreeNode(val);
            // connecting the new values
            root->left = newLeftNode;
            root->right = newRightNode;
            // connect the tree to nodes
            root->left->left = leftNode;
            root->right->right = rightNode;

            return root;
        }
        // doing backtracking
        addRow(root->left, val, depth, curr+1);
        addRow(root->right, val, depth, curr+1);

        return root;
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        // starting from base case if depth is 1
        if(depth == 1){
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        // Now we make the function in which we add new row if present
        return addRow(root, val, depth, 1);
    }
};