class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> firstArr(n);
        firstArr[0] = height[0];
        for(int i=1; i<n; i++){
            firstArr[i] = max(height[i], firstArr[i-1]);
        }

        vector<int> secondArr(n);
        secondArr[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--){
            secondArr[i] = max(height[i], secondArr[i+1]);
        }

        int totalWater = 0;
        for(int i=0; i<n; i++){
            totalWater += min(firstArr[i], secondArr[i]) - height[i];
        }

        return totalWater;
    }
};