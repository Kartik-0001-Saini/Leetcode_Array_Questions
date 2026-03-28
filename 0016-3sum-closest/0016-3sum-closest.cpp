class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int clsSum = nums[0] + nums[1] + nums[2];

        for(int i=0; i<n; i++){
            int left = i+1, right = n-1;
            while(left < right){
                int currSum = nums[i] + nums[left] + nums[right];
                if(abs(clsSum - target) > abs(currSum - target)){
                    clsSum = currSum;
                }

                if(currSum < target){
                    left++;
                }
                else if(currSum > target){
                    right--;
                }
                else{
                    return currSum;
                }
            }
        }

        return clsSum;
    }
};