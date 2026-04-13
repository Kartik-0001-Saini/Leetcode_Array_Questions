class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int st) {
        int n = nums.size();
        st = st % n;
        // int idx = -1;
        int minIdx = INT_MAX;

        for(int i=0; i<n; i++){
            if(nums[i] == target){
                minIdx = min(minIdx, abs(i-st));
            }
        }

        return minIdx;
    }
};