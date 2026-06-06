class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> preSum(n), suffSum(n);

        preSum[0] = 0;
        for(int i=1; i<n; i++){
            preSum[i] = preSum[i-1] + nums[i-1];
        }
        
        suffSum[n-1] = 0;
        for(int i=n-2; i>=0; i--){
            suffSum[i] = suffSum[i+1] + nums[i+1];
        }

        vector<int> res(n);
        for(int i=0; i<n; i++){
            res[i] = abs(preSum[i] - suffSum[i]);
        }

        return res;
    }
};