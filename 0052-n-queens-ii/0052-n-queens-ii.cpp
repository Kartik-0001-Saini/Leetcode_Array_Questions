class Solution {
public:

    bool isSafe(vector<string>& board, int n, int row, int col){
        for(int i=0; i<col; i++){
            if(board[row][i] == 'Q'){
                return false;
            }
        }
        for(int i=0; i<row; i++){
            if(board[i][col] == 'Q'){
                return false;
            }
        }

        for(int i=row, j=col; i>=0 && j>=0; i--, j--){
            if(board[i][j] == 'Q'){
                return false;
            }
        }

        for(int i=row, j=col; i>=0 && j<n; i--, j++){
            if(board[i][j] == 'Q'){
                return false;
            }
        }

        return true;
    }

    void backtrack(vector<string>& board, int n, int row, int& count){
        if(row == n){
            count++;
            return;
        }

        for(int i=0; i<n; i++){
            if(isSafe(board, n, row, i)){
                board[row][i] = 'Q';

                backtrack(board, n, row+1, count);
                board[row][i] = '.';
            }
        }
    }

    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        int count = 0;

        backtrack(board, n, 0, count);
        return count;
    }
};