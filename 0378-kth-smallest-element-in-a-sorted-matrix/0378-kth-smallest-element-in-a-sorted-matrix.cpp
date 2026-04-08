class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        vector<int> res;
        int row = mat.size(), col = mat[0].size();
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                res.push_back(mat[i][j]);
            }
        }

        sort(res.begin(), res.end());
        return res[k-1];
    }
};