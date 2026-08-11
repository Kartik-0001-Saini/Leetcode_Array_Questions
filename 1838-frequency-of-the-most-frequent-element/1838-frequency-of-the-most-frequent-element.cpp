class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0;
        int res = 0;
        long long tot = 0;

        for(int right = 0; right < n; right++){
            tot += nums[right];
            while((long long) nums[right] * (right - left + 1) > tot + k){
                tot -= nums[left];
                left++;
            }
            res = max(res, right - left + 1);
        }

        return res;
    }
};