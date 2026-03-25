class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& mat) {
        int row = mat.size(), col = mat[0].size();
        long long prefix = 1, suffix = 1;
        const int n = 12345;
        vector<vector<int>> res(row, vector<int> (col));

        for(int i=row-1; i>=0; i--){
            for(int j=col-1; j>=0; j--){
                res[i][j] = suffix;
                suffix = (suffix * (mat[i][j] % n)) % n; 
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                res[i][j] = (res[i][j] * prefix) % n;
                prefix = (prefix * (mat[i][j] % n) % n); 
            }
        }


        return res;
    }
};