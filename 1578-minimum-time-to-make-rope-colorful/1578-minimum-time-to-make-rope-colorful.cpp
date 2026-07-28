class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = neededTime.size();
        int count = 0;

        for(int i=1; i<n; i++){
            if(colors[i] == colors[i-1]){
                count+=min(neededTime[i], neededTime[i-1]);
                neededTime[i] = max(neededTime[i], neededTime[i - 1]);
            }
        }

        return count;
    }
};