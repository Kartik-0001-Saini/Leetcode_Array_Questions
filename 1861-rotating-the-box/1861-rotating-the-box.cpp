class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<vector<char>> res(col, vector<char>(row));
        for(int i=0; i<row; i++){
            int p = 0;
            for(int j=0; j<col; j++){
                if(mat[i][j] == '.'){
                    swap(mat[i][j], mat[i][p]);
                    p++;
                }
                else if(mat[i][j] == '*'){
                    p = j+1;
                }
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                res[j][row-1-i] = mat[i][j];
            }
        }

        return res;
    }
};