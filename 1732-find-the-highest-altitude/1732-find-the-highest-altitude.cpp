class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> suffArr(n+1);

        suffArr[0] = 0;
        int maxAlt = 0;
        for(int i=0; i<n; i++){
            suffArr[i+1] = suffArr[i] + gain[i];
            maxAlt = max(maxAlt, suffArr[i+1]);
        }

        return maxAlt;
    }
};