class Solution {
public:
    long long dividePlayers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int st = 0, end = nums.size()-1;
        int tar = nums[st] + nums[end];
        long long product = 0;

        while(st < end){
            if(nums[st] + nums[end] != tar){
                return -1;
            }

            product += nums[st] * nums[end];

            st++;
            end--;
        }

        return product;
    }
};