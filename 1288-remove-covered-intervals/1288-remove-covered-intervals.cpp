class Solution {
public:

    static bool campare(vector<int>& a, vector<int>& b){
        if(a[0] == b[0]){
            return a[1] > b[1];
        }

        return a[0] < b[0];
    }

    int removeCoveredIntervals(vector<vector<int>>& mat) {
        sort(mat.begin(), mat.end(), campare);

        int rem = 0, endPoint = 0;
        for(auto& v:mat){
            if(v[1] > endPoint){
                rem++;
            }
            endPoint = max(endPoint, v[1]);
        }

        return rem;
    }
};