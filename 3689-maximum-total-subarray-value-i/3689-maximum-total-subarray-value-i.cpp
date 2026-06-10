class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        int minEle = INT_MAX, maxEle = INT_MIN;

        for(int i=0; i<n; i++){
            if(nums[i] > maxEle){
                maxEle = nums[i];
            }
            if(nums[i] < minEle){
                minEle = nums[i];
            }
        }

        return (long long)(maxEle - minEle) * k;
    }
};