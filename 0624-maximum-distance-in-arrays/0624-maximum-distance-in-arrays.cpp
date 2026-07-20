class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int globalMax = arr[0].back(), globalMin = arr[0][0];
        int res = 0;

        for(int i=1; i<arr.size(); i++){
            int localMax = arr[i].back();
            int localMin = arr[i][0];

            res = max(res, max(localMax - globalMin, globalMax - localMin));

            globalMax = max(globalMax, localMax);
            globalMin = min(globalMin, localMin);
        }

        return res;
    }
};