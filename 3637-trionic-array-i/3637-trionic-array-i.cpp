class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p = 0, q = 0;
        int n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i] > nums[p]){
                p++;
            }
            else{
                break;
            }
        }

        if(p == n-1 || p == 0) return false;
        q = p;
        for(int i=p+1; i<n; i++){
            if(nums[q] > nums[i]){
                q++;
            }
            else{
                break;
            }
        }

        if(q == n-1 || p == q) return false;

        for(int i=p; i<q; i++){
            if(nums[i] <= nums[i+1]){
                return false;
            }
        }

        for(int i=q; i<n-1; i++){
            if(nums[i] >= nums[i+1]){
                return false;
            }
        }

        return true;
    }
};