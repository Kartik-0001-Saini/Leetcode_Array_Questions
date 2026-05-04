class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<vector<int>> res(n, vector<int>(n));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                res[j][n-i-1] = mat[i][j]; 
            }
        }

        mat = res;
    }
};