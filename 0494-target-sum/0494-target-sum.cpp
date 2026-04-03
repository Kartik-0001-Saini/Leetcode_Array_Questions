class Solution {
public:

    void backtrack(vector<int>& nums, int target, int idx, int sum, int& count){
        // base condition
        if(idx == nums.size()){
            if(sum == target){
                count+=1;
            }
            return;
        }

        // doing addition
        backtrack(nums, target, idx+1, sum+nums[idx], count);
        // doing subtraction
        backtrack(nums, target, idx+1, sum-nums[idx], count);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int count = 0;
        // doing backtrack in that array..
        backtrack(nums, target, 0, 0, count);
        return count;
    }
};