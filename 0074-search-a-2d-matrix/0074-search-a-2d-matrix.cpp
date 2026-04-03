class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int row = mat.size(), col = mat[0].size();
        int foundRow = -1;

        int st_row = 0, end_row = row-1;
        while(st_row <= end_row){
            int mid = st_row + (end_row - st_row)/2;
            if(mat[mid][0] <= tar && mat[mid][col-1] >= tar){
                foundRow = mid;
                break;
            }

            else if(mat[mid][0] > tar){
                end_row = mid-1;
            }

            else{
                st_row = mid+1;
            }
        }

        cout<<foundRow<<endl;
        if(foundRow == -1) return false;

        int st = 0, end = col-1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(mat[foundRow][mid] == tar){
                return true;
            }
            else if(mat[foundRow][mid] < tar){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        return false;
    }
};