class Solution {
public:
    void rotateEven(vector<vector<int>>& res, int row, int col, int k) {
        vector<int> ans;
        for (int i = k; i < col; i++) {
            ans.push_back(res[row][i]);
        }
        for (int i = 0; i < k; i++) {
            ans.push_back(res[row][i]);
        }

        for (int i = 0; i < col; i++) {
            res[row][i] = ans[i];
        }
    }

    void rotateOdd(vector<vector<int>>& res, int row, int col, int k) {
        vector<int> ans;

        // right rotation = last k elements first
        for (int i = col - k; i < col; i++) {
            ans.push_back(res[row][i]);
        }
        for (int i = 0; i < col - k; i++) {
            ans.push_back(res[row][i]);
        }

        for (int i = 0; i < col; i++) {
            res[row][i] = ans[i];
        }
    }

    bool areSimilar(vector<vector<int>>& mat, int k) {
        int row = mat.size(), col = mat[0].size();
        vector<vector<int>> res(mat.begin(), mat.end());
        k = k % col;
        if (k == 0)
            return true;

        for (int i = 0; i < row; i++) {
            if (i % 2 == 0) {
                rotateEven(res, i, col, k);
            } else {
                rotateOdd(res, i, col, k);
            }
        }

        return mat == res;
    }
};